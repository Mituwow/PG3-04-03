#include <stdio.h>
#include "Bike.h"
#include "Car.h"


int main() {

	Vehicle* driver[3];

	for (int i = 0; i < 3; i++) {
		if (i < 1) {
			driver[i] = new Car;
		}
		else {
			driver[i] = new Bike;
		}
	}
	for (int i = 0; i < 3; i++) {
		driver[i]->Ride();
	}
	for (int i = 0; i < 3; i++) {
		delete driver[i];
	}

	return 0;
}