#include "human.h"
#include <map>

class Teacher: public Human
{
private:
	std::string workingHours;
	std::string academic_degree;
	std::string subject;
public:
	Teacher(std::string wh, std::string ad, std::string s):
		workingHours(wh), academic_degree(ad), subject(s) { }
	char getPosition() const
	{
		return 't';
	}
	std::list<std::string> getData() const
	{
		std::list<std::string> res;
		res.push_back("Teacher");
		res.push_back(workingHours);
		res.push_back(academic_degree);
		res.push_back(subject);
		return res;
	}
};
