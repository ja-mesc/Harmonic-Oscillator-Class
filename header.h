#include <vector>

class Oscillator {
	double amp; //amplitude
	double omega; //angular freq.
	double theta; //angular displacement at t = 0 i.e. phase;

public:
	//constructor
	Oscillator(double new_amp, double new_omega, double new_theta);

	//position in time
	std::vector<double> coordinate(const std::vector<double>& time);
};