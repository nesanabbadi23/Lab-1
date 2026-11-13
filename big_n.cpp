// ConsoleApplication14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

long long factorialRec(int n) {
	if (n == 0) return 1;
	return n * factorialRec(n - 1);

}

long long factorialIter(int n) {
	long long result = 1;
	for (int i = 2; i <= n; i++)
		result = result * i;
	return result;

}

int main() {
	for (int n = 0; n <=13; n++) {
		cout << n << "! = " << factorialRec(n);
		 cout << "   loop: " << factorialIter(n);
		cout << endl;

	}
	int big;

cout << "Enter a large n: ";
cin >> big;

cout << "iterative finished: " << factorialIter(big) << endl;

cout << "recursive finished: " << factorialRec(big) << endl;
	return 0;

}