#pragma once
#include "human.h"
#include <iostream>

class BridgeAbstarction
{
protected:
	Human* human_;
public:
	BridgeAbstarction(Human* hmn): human_(hmn) { }
	virtual void saveToFile() const
	{
		std::cout << std::endl;
		// switch (human_->getPosition())
		// this->human_->getData();
	}
};
