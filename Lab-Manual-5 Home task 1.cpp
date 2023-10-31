//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//This code was written by Faizan Ahmad 476602 section A

//Home Task 1

//Write a program in C++ to find LCM of any two numbers using HCF

#include <iostream>

using namespace std;
int main() {


int n1, n2, hcf = 1, i = 1;  // I declared 2 variables to represent the 2 inputs (n1 and n2), then i declared "hcf" and "i" (i will be used for the while condition)

cout<<"Enter your first number: "<<endl;  // propt asking for user inputs for n1 and n2
cin>>n1;
cout<<"Enter your second number: "<<endl;
cin>>n2;

while ( i <= n1 && i <= n2 ) {      // we use this loop to check every integer fron 1 all the way up to either n1 or n2, depending on which is larger.
	
	if (n1 % i == 0 && n2 % i == 0) {   // only if i is a multiple of n1 or n2 will this if statment be carried out.
	
	hcf = i;          // the hcf value gets replaced by the integer i. 
	                  // this works because the hcf is also the largest number that can divide both numbers without remainder.
	}
	++i;   // i++ will increase the value for i by 1 per loop
	
}

cout<<"The hcf of "<<n1<<" and "<<n2<<" is "<<hcf<<endl;  // output statment to display the hcf

int lcm;           // new integer lcm is declared

lcm = (n1 * n2) / hcf;        // i used this formula to directly get the value for lcm using hcf.

cout<<"The lcm of these numbers is "<<lcm;      // output to display the lcm value.


    return 0;
}








