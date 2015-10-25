#include<iostream>
using namespace std;
const int month = 12;
int main(){
	int age;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Your age is " << age << ", which has " << age*month << " months." << endl;
	return 0;
}