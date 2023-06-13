#include "BrigdeAbstraction.h"
#include <nlohmann/json.hpp>
#include <fstream>

//Write to JSON FILE and read
class RefinedAbstraction : public BridgeAbstarction
{
public:
	RefinedAbstraction(Human* human) : BridgeAbstarction(human) { }
	void saveToFile() const override
	{
		using json = nlohmann::json;
		int count = 0;
		int len = 0;
		json j;
		std::string first_name, last_name;
		for (int i = 0; i < human_->getName().length(); i++)
		{
			if (count == 0)
			{
				if (human_->getName()[i] != ' ')
					first_name += human_->getName()[i];
				else
				{
					count++;
					continue;
				}
			}
			else if (count == 1)
				last_name += human_->getName()[i];
		}
		j["name"]["firstName"] = first_name;
		j["name"]["lastName"] = last_name;
		j["birthDate"] = human_->getDateOfBirth();
		int count_coma = 0;
		std::string city, street, building, flat;
		for (int i = 0; i < human_->getAddress().length(); i++)
		{
			if (count_coma == 0)
			{
				if (human_->getAddress()[i] != ',')
					city += human_->getAddress()[i];
				else
				{
					count_coma++;
					continue;
				}
			}
			else if (count_coma == 1)
			{
				if (human_->getAddress()[i]!= ',')
					street += human_->getAddress()[i];
				else
				{
					count_coma++;
					continue;
				}
			}
			else if (count_coma == 2)
			{
				if (human_->getAddress()[i] != ',')
					building += human_->getAddress()[i];
				else
				{
					count_coma++;
					continue;
				}
			}
			else if (count_coma == 3)
			{
					flat += human_->getAddress()[i];
			}
		}
		j["address"]["city"] = city;
		j["address"]["street"] = street;
		j["address"]["buildingNo"] = building;
		j["address"]["flatNo"] = building;
		switch (human_->getPosition())
		{
		case 't':
			j["position"] = "teacher";
			j["workingTime"] = *std::next(human_->getData().begin(), 0);
			j["academicDegree"] = *std::next(human_->getData().begin(), 1);
			j["subject"] = *std::next(human_->getData().begin(), 2);
			break;
		case 'd':
			j["position"] = "dean";
			j["fuculty"] = *std::next(human_->getData().begin(), 0);
			break;
		case 's':
			j["position"] = "student";
			j["grade"] = *std::next(human_->getData().begin(), 0);
			break;
		}
		std::ofstream out("Address.json", std::ios::app);
		if (out.is_open())
			out << j << std::endl;
		else
			MessageBox::Show("File opening failed");
		out.close();
	}
};
