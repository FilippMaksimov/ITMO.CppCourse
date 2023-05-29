#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>

using json = nlohmann::json;

int main()
{
	json j;
	j["name"] = "Test";
	j["nothing"] = nullptr;
	j["answer"]["everything"] = 2;
	j["companies"] = { "Info", "TM" };
	j["user"] = { {"name", "solo"}, {"active", true} }; 

	std::cout << std::setw(4) << j << std::endl;
	std::cout << j.at("name") << std::endl;
	std::cout << j["answer"]["everything"] << std::endl;

	auto user = j["user"]["name"];
	std::cout << "User: " << user << std::endl;
	
	j["user"] = { {"name", "polo"}, {"active", false} };
	std::ofstream out("polo.json");
	out << std::setw(4) << j << std::endl;

	std::ifstream in("polo.json");
	json polo;
	in >> polo;
	std::cout << std::setw(4) << polo["user"] << std::endl;
	return 0;
}