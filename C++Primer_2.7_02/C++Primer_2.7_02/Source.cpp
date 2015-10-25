#include<iostream>
using namespace std;
const int long_to_yard = 220;
int main(){
	int long_d;
	cout << "Enter long:" << endl;
	cin >> long_d;
	cout << long_d << " long = " << long_d*long_to_yard << " yards." << endl;
	return 0;
}