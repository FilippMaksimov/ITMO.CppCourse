#include "BrigdeAbstraction.h"

//Write to JSON FILE and read
class RefinedAbstraction : public BridgeAbstarction
{
public:
	RefinedAbstraction(Human* human): BridgeAbstarction(human) { }
	void saveToFile() const override
	{
		std::cout << std::endl;
	}
};