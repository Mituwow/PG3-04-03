#pragma once
#include "Vehicle.h"

class Car :public Vehicle {
public:
	Car();
	~Car() override;
	void Ride() override;
};