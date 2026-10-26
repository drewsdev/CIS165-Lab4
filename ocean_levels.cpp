#include <iostream>

using namespace std;

int main()
{
	const double OCEAN_RISE_PER_YEAR = 1.5;
	const int YEARS_FIVE = 5;
	const int YEARS_SEVEN = 7;
	const int YEARS_TEN = 10;

	double rise_after_five_years = OCEAN_RISE_PER_YEAR * YEARS_FIVE;
	double rise_after_seven_years = OCEAN_RISE_PER_YEAR * YEARS_SEVEN;
	double rise_after_ten_years = OCEAN_RISE_PER_YEAR * YEARS_TEN;

	cout << "Ocean level rise after 5 years: " << rise_after_five_years << " millimeters" << endl;
	cout << "Ocean level rise after 7 years: " << rise_after_seven_years << " millimeters" << endl;
	cout << "Ocean level rise after 10 years: " << rise_after_ten_years << " millimeters" << endl;

	return 0;
}
