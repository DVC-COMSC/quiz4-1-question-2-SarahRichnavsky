// Complete the following program.
// #include <iostream>
// using namespace std;

// int main()
// {
// 	const double rate1 = 1.10;
// 	const double rate2 = 2.20;
// 	const double rate3 = 3.70;
// 	const double rate4 = 4.80;
// 	double total_charge;
// 	double weight, distance, rate;

// 	// **********************
// 	// Your code
// 	// **********************

// 	cout << "Enter weight and distance ";
// 	// cin >> weight >> distance;
// 	cin >> weight;
// 	cin >> distance;

// 	if (weight <= 2)
// 	{
// 		rate = rate1;
// 	}
// 	// if (6 > weight > 2)
// 	if (weight < 6)
// 	{
// 		rate = rate2;
// 	}
// 	// if (10 > weight > 6)
// 	if (weight < 10)
// 	{
// 		rate = rate3;
// 	}
// 	// if (10 < weight < 20)
// 	if (weight < 20)
// 	{
// 		rate = 4;
// 	}
// 	// if (weight >= 20)
// 	else
// 	{
// 		cout << "No weight over 20 lb";
// 	}

// 	total_charge = (distance / 500) * rate;
// 	cout << total_charge << endl;
// 	return 0;
// }
#include <iostream>
using namespace std;

int main()
{
	const double rate1 = 1.10;
	const double rate2 = 2.20;
	const double rate3 = 3.70;
	const double rate4 = 4.80;
	double total_charge;
	double weight, distance, rate;

	cout << "Enter the package weight and distance: ";
	cin >> weight >> distance;

	if (weight > 20 || distance < 10 || distance > 3000)
	{
		cout << "Wrong values\n";
		return 0;
	}

	if (weight > 10)
		rate = rate4;
	else if (weight > 6)
		rate = rate3;
	else if (weight > 2)
		rate = rate2;
	else
		rate = rate1;
	total_charge = (distance / 500.00) * rate;
	cout << total_charge << endl;
}