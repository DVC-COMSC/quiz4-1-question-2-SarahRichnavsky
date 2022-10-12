// Complete the following program. 
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

	
        // **********************
        // Your code 
        // **********************

	cout<<"Enter weight and distance ";
	cin>> weight >> distance;

	if (weight<=2){
		rate = rate1;
	}
	if (6>weight>2){
		rate = rate2;
	}
	if (10<weight>6){
		rate = rate3;
	}
	if (10<weight<20){
		rate = 4
	}
	if (weight>=20){
		cout<<"No weight over 20 lb";
	}

        total_charge = (distance/500)*rate;
	cout << total_charge << endl;

}
