#include <iostream>

using namespace std;

int main() {

	cout << boolalpha;

	int a = 15;
	int b = 20;
	int age = 26;


	bool areEqual = a == b;


	cout << (a < b) << endl;

	cout << areEqual << endl;

	cout << "Is age greater or equal than 21: " << (age >= 21) << endl;


	return 0;
}