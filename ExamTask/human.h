#pragma once
#include <string>
#include <list>
#include <vector>
#include <msclr/marshal_cppstd.h>
#include <string>

using namespace System;
using namespace System::Windows::Forms;

class Human
{
private:
	std::string full_name;
	std::string date_of_birth;
	std::string address;
public:
	void setName(std::string name)
	{
		full_name = name;
	}
	std::string getName()
	{
		return full_name;
	}
	void setDateOfBirth(std::string birth_date)
	{
		date_of_birth = birth_date;
	}
	std::string getDateOfBirth()
	{
		return date_of_birth;
	}
	void setAddress(std::string add)
	{
		address = add;
	}
	std::string getAddress()
	{
		return address;
	}
	virtual char getPosition() const = 0;
	virtual std::list<std::string> getData() const = 0;
};
