#include <iostream>
#include "header.h"
#include<cmath>

int main() {

	Oscillator pendulum(0.05, 12, 1.6); //(amp, freq, angle)

	std::vector<double> time = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};

	// it would be better if, since the pendulum has already been constructed and time is a fixed array 
	// of increments, x should not need any arguments.

	std::vector<double> position_array = pendulum.coordinate(time);

	for (const double& x : position_array) {
		std::cout << x << std::endl;
	}

}