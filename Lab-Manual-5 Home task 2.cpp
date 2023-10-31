//-------------------------------------------------------------------------------------------------------------------------------------------------
//This code was written by Faizan Ahmad 476602 Section A for lab manual 5 home task 2

//Home Task 2
//Write a C++ code to find out the sum of an arithetic progression series

#include<iostream>
using namespace std;
int main() {

double a, d, n, sum=0, term, i=1;  // i used double so that decimal inputs can still be used in the calculations.

cout<<"Enter your first term 'a': "<<endl;  //prompt for first term
cin>>a;
cout<<"Enter your common diffrence 'd': "<<endl;  // prompt for common diffrence
cin>>d;
cout<<"How many terms from the first would you like me to sum? "<<endl;  // prompt for the number of terms to be summed
cin>>n;

while ( i <= n ) {   // this while loop calculates each term of the series and then adds them up 1 by one.
	term = a + (i-1) * d;
	sum = sum + term;
	++i;             // i increases in increments of 1 until we have calculated the sum of all 'n' terms.
	
	}
	cout<<"The sum of the terms is: "<<sum; // output to disply our sum.
return 0;
}




