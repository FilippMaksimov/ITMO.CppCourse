#include "AppForm.h"
#include "human.h"
#include <list>
#include <string>


class Student : public Human
{
private:
	std::string grade;
public:
	Student(std::string g): grade(g) { }
	char getPosition() const
	{
		return 's';
	}
	std::list<std::string> getData() const
	{
		std::list<std::string> res;
		res.push_back(grade);
		return res;
	}
};
