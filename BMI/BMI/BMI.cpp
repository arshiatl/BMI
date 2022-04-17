#include <iostream>

using namespace std;

void main() {
	float weight, height, bmi;

	cout << "Enter your weight(kg) : ";
	cin >> weight;

	cout << "Enter your height(m) : ";
	cin >> height;

	bmi = weight / (height * height);

	if (bmi < 18.5) {
		cout << "Underweight" << "\n";
	}
	else if(bmi > 25) {
		cout << "Overweight" << "\n";
	}
	else
	{
		cout << "Normal weight " << "\n";
	}

	cout << "your bmi is : " << bmi;

	system("pause>0");
}