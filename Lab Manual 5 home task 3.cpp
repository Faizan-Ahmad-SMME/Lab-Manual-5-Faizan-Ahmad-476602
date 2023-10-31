//-------------------------------------------------------------------------------------------------------------------------------------------------
//This code was written by Faizan Ahmad 476602 Section A, for lab manual 5 home task 3

//This code displays a diamonf made of * with a given amount of rows.
#include<iostream>
using namespace std;
int main() {
		
	int n;  // n declared to represnet number of rows.
	
	cout<<"Enter the number of rows you would like"<<endl;  // prompt to ask for the number of rows.
	cin>>n;
	
	int i=1;           // i is will be used for the main while loop.
	int space = n/2;   // number of spaces ' ' before an astrik in the first row is given by n/2
	int stars = 1;     // number of stars in the first row is allways 1
	
	while ( i <= n ) {  // this loop (which outputs each row) will only loop 'n' number of times.
		
		int j = 1; // j is declared for all subsiquent loops.
		
		while ( j <= space ) {  //this first loop outputs the intital spaces ' ' before an astrik.
			
			cout<<" ";
			j++;                //the number of times this loop will run is equal to the value 
		}
		
		j = 1;   //the value of j is reset to 1
		
		while ( j <= stars ) {  //this loop prints the asticks in each row.
			
			cout<<"*";
			j++;        // again the code loops only 'stars' number of times i.e the value of 'stars' represent how many times this will loop
		}
		
		cout<<endl;    // after the first row has been printed the code moves on to the next row
		
		if ( i < n/2 + 1 ) {   // this if statment detects if the code has reached the middle of the diamond.
		                       // if it hasent then the value of space decreases by 1 and the value of stars increases by 2
			space--;
			stars = stars + 2;
		} else {               // incase the if statment returns false then that means the code has reached the middle of the diamond.
			space++;           // the value of space is increased by 1
			stars = stars - 2; // and the value of stars decreases by 2
		}
		
		
		
		i++;      // i increases by 1 until it has reached the number of rows, in which case the loop breaks and the code has printed a diamond
	}
	
return 0;
}








