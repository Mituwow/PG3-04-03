#pragma once
#include"Vehicle.h"

class Bike :public Vehicle {
public:
	Bike();
	~Bike() override;
	void Ride() override;
};