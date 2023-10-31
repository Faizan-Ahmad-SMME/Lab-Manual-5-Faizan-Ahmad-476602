//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//This code was written by Faizan Ahmad 476602 Section A 
//The following code displays a given number in binary.

#include<iostream>
using namespace std;
int main() {	
	int x, j;               // x is the input number, j is a termporary variable that takes the value of x for calculations (hence saving the initial value of x as 'x')
	int k=0, u=0, n=0;      // k is an integer that represents the binary of 'x' however it is in the wrong orintation, example 2 is 10 is binary but the value of k will show 1
	                        // hence later the code will reverse all the digits of k in order to display it properly
	int reverse = 0, digit; // reverse is the final output and digit is a temporary variable to represent each of digit of k
	                        // u is the number of zeros to be diplyied at the end of a binary sequence e.g "10100", u will be 2
	                        // n is a varible that detects if the first '1' has been calculated for the binary sequence, this helps determine the value of 'u'
	                        
	cout<<"Enter a number less then 1022:"<<endl; //inout prompt, my code works for numbers up to 1022, after which because i used 'int' the code stops functioning.
	cin>>x;
	j = x;		// j gets assigned the value of x in order for x to remain the same through out the code.
	
	while ( j > 0 ) {     // first while loop to divide j by 2 over and over until all the remainders are determined.
		
		if ( j % 2 == 1 ) {   //is j is not divisable 2 then the output should be 1
			k=(k+1) * 10;
			n++;              // if a number is not divisable by 2 then the value of n changes to 1
		}
		else {
			if ( n == 0) {    // if n = 0 then that means the first divistion lead to remainder 0 hence u saves this information by increasing its value by 1
				u++;
				k=k*10;       //the value of k increased by 10 means if the first digit in binary was 1 then now its 10
			}
			else {            // if n > 0 then the first 1 in the binary sequence has been detected
			k=k*10;
			}
		}
		j = j/2;              // the value of j is then divided by 2 before the next loop begins
			
	}
	cout<<endl;
	
	
	//now we need to find a way to reverse the digits of k and have 'u' number of zeros display at the end.
	
	k = k/10;                 // due to the nature of my code the value of k is always 10 times greater then what it should be hence it should be corrected
	
	while ( k > 0 ) {         //this loop calculates each digit and then re-organizes them in revers order
	
	digit = k % 10;                  //remainder by 10 means is the last digit  
	reverse = reverse * 10 + digit;  // value of reverse is now that digit and by multiplying by 10 we move on to the next digit
	k = k / 10;                      // value of k is divided by 10 in order to move on to the next number
	}

	cout<<"Your number in binary is: ";   //output displies the binary number in correct orentation, read right to left

	cout<<reverse;
	while ( u >0 ) {                 // now all we need is to diplay the initial zeros of k at the end hence we use a loop that displayes the u number of 0s at the end
		cout<<"0";
		u--;
	}	
	cout<<endl;	
	return 0;
}





