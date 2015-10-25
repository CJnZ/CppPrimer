#include<iostream>
using namespace std;

double l_to_a(double ly){
	double au;
	au = 63240 * ly;
	return au;
}


int main(){
	double light_year;
	double astronomical_units;
	cout << "Enter the number of light years: ";
	cin >> light_year;
	astronomical_units = l_to_a(light_year);
	cout << light_year << " light years = " << astronomical_units << " astronomical units." << endl;
	return 0;
}