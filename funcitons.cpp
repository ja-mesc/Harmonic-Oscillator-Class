#include "header.h"
#include <cmath>
#include <vector>
#include <iostream>

Oscillator::Oscillator(double new_amp, double new_omega, double new_theta) {
	amp = new_amp;
	omega = new_omega;
	theta = new_theta;
}

std::vector<double> Oscillator::coordinate(const std::vector<double>& time) {

	std::vector<double> pos = {}; //empty array for positions

	if (time.empty()) {
		std::cout << "Error. Time array is empty. Please enter some time coordinates! \n";
		return pos;
	}

	for (const double& num : time) {
		double position = amp * (cos(theta + omega * num));
		pos.push_back(position);
	}
	return pos;
};