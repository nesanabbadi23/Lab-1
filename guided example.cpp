// guided example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
 using namespace std;

 int sumTo(int n) {
	 cout << "enter sumTo(" << n << ")" << endl;
	 if (n == 0) { 
		 cout << "base case: return 0" << endl;
		 return 0;
		
	}
	 int result = n + sumTo(n - 1); 
	 cout << "sumTo(" << n << ") returns " << result << endl;
	 return result;
	
}

 int main() {
	 int total = sumTo(5);
	 cout << "Total = " << total << endl;
	 return 0;
	
}
