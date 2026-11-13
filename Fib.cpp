// ConsoleApplication15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci = " << fibonacci(n) << endl;

    return 0;
}
 
 