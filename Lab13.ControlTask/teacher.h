#include "human.h"
#include <string>

class Teacher : public Human
{
public:
	Teacher(std::string last_name, std::string name, std::string second_name,
		unsigned int work_time) : Human(last_name, name, second_name)
	{
		this->work_time = work_time;
	}
	unsigned int get_work_time()
	{
		return this->work_time;
	}
	void show_data()
	{
		Human::show_data();
		std::cout << "Должность: Преподаватель" << std::endl;
		std::cout << "Количество учебных часов: " << work_time << std::endl;
	}
private:
	unsigned int work_time;
};
