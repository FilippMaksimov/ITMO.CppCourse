#pragma once
#include "human.h"
#include <iostream>
#include <fstream>
#include <iterator>
#include <list>
#include <string>

using namespace System;
using namespace System::Windows::Forms;

class BridgeAbstarction
{
protected:
	Human* human_;
public:
	BridgeAbstarction(Human* hmn): human_(hmn) { }
	virtual void saveToFile() const
	{
		std::ofstream out("Address.txt", std::ios::app);
		if (out.is_open())
		{
			out << "-" << std::endl;
			out << "Full name: " << human_->getName() << std::endl;
			out << "Date of birth: " << human_->getDateOfBirth() << std::endl;
			out << "Address: " << human_->getAddress() << std::endl;
			switch (human_->getPosition())
			{
			case 't':
				out << "Position: Teacher" << std::endl;
				out << "Working time: " << *std::next(human_->getData().begin(), 0) << std::endl;
				out << "Academic degree: " << *std::next(human_->getData().begin(), 1) << std::endl;
				out << "Subject: " << *std::next(human_->getData().begin(), 2) << std::endl;
				break;
			case 'd':
				out << "Position: Dean of fuculty" << std::endl;
				out << "Fuculty: " << *std::next(human_->getData().begin(), 0) << std::endl;
				break;
			case 's':
				out << "Position: Student" << std::endl;
				out << "Grade: " << *std::next(human_->getData().begin(), 0) << std::endl;
				break;
			}
			out << "-" << std::endl;
			MessageBox::Show("Data has been recorded successfully");
		}
		else
		{
			MessageBox::Show("File opening failed");
		}
		out.close();
	}
};
