#include<iostream>
#include<math.h>
using namespace std;

int main() {

////Lab Task 1
//
//	
//	int x;
//	
//	do {
//		cout<<"Enter a number: ";
//		cin>>x;
//	} while ( x > 0 );
//
////Lab Task 2
//
//
//    char choice;
//    double x, y;
//	double result;
//
//    do {
//        cout << "Enter first number: ";
//        cin >> x;
//
//        cout << "Enter an operator (+, -, *, /, %, ^): ";
//        cin >> choice;
//
//        cout << "Enter second number: ";
//        cin >> y;
//
//        switch (choice) {
//        	
//            case '*' : {
//				result = x * y;
//				
//				break;
//			}
//			
//			case '/' : {
//				result = x / y;
//				
//				break;
//			}
//			
//			case '+'  : {
//				result = x + y;
//				
//				break;
//			}
//			
//			case '-' : {
//				result = x - y;
//				break;
//			}
//			
//			
//			
//			case '%' : {
//				result = fmod( x,y );
//				break;
//			}
//			
//			
//			
//			case '^' : {
//				result = pow( x,y );
//				break;
//			}
//			
//			default : {
//				cout<<"Your opperator is invalid"<<endl;
//				break;
//			}
//        }
//
//        cout << "Result: " << x << " " << choice << " " << y << " = " << result << endl;
//
//        cout << "Do you want to perform another calculation? (y/n): ";
//        cin >> choice;
//    } while (choice == 'y' || choice == 'Y');
//    
////Lab Task 3
//
//
////part a
//
//int sum = 0, x = 0;
//
//cout<<"Part a"<<endl;
//
//
//do {
//	if ( x % 2 == 0 && x != 0 && x != 1) {
//		
//		sum = sum + x;
//	}
//	
//	x++;
//	
//} while ( x < 101 );
//cout<<"The sum of all even numbers between 0 to 100 is:"<<sum;
//
//
//
////part b
//
//sum = 0;
//x = 0;
//double y;
//
//cout<<"Part b"<<endl;
//
//do {
//	y = pow(x,2);
//	sum = sum + y;
//	x++;
//	
//} while (x<101);
//
//cout<<"The sum of all perfect squares between 1 and 100 is: "<<sum;
//
////Task 4
//
////Part a
//
//double x = 0;
//
//do {
//	cout<< pow( 2,x )<<" ,";
//	x++;
//	
//} while ( x <= 20 );

//part b

int a, b, sum;

cout<<"Enter numbers a and b"<<endl;

cin>>a>>b;

do {
	if ( a % 2 == 1 ) {
		sum = sum + a;
	}
	a++;
} while ( a <= b);


cout<<"The sum of all odd numbers between a and b is: "<<sum;

return 0;











}
