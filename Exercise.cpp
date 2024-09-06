
#include <iostream>

using namespace std;

int main() {
	double sales = 95000;
	double state_tax = 95000 * 0.4;
	double county_tax = 95000 * 0.2;
	double total_tax = state_tax + county_tax;
	cout << "Total Sales = " << sales << endl
		<< "State Tax = " << state_tax << endl
		<< "County Tax = " << county_tax << endl
		<< "Full Tax (County + State) = " << total_tax;


	return 0;
}


