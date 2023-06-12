#include "human.h"

class Dean: public Human
{
private:
	std::string fuculty;
public:
	Dean(std::string f): fuculty(f) { }
	char getPosition() const
	{
		return 'd';
	}
	std::list<std::string> getData() const
	{
		std::list<std::string> res;
		res.push_back(fuculty);
		return res;
	}
};
