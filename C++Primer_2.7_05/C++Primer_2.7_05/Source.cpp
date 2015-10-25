#include<iostream>
using namespace std;

double ce_to_Fa(double ce){
	double fa;
	fa = 1.8*ce + 32.0;
	return fa;
}

int main(){
	double Celsius;
	double Fahrenheit;
	cout << "Please enter a Celsius value: ";
	cin >> Celsius;
	Fahrenheit = ce_to_Fa(Celsius);
	cout << Celsius << " degrees Celsius is " << Fahrenheit << " degrees Fahrenheit." << endl;
	return 0;
}