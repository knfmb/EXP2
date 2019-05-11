
//PROBLEM 1
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int billamount, hours;
	char package;
	
	cout << "Enter the purchased package: ";
	cin >> package;
	cout << "Enter the number of hours: ";
	cin >> hours;
	
	
		switch (package)
		{
		case 'a':
		case 'A':
			billamount=995;
			if (hours>10){
				billamount = billamount + (hours - 10) * 20;
			}
			break;
			
		
		case 'b':
		case 'B':
			billamount=1495;
			if (hours>20){
				billamount = billamount + (hours - 20) * 10;
			}
			break;
			
		case 'c':
		case 'C':
			billamount=1995;
			break;
		default:
			cout<< "Invalid input";
		}

	
	cout<<"Your total internet bill is: " <<billamount;
	getch ();
	return 0;
}

//PROBLEM 2
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int prevreading, currentreading;
	float bill = 35;
	float charge = 1.10;
	float latecharge = 20;
	
	cout << "Enter the meter reading in the previous month (in gallons):";
	cin >> prevreading;
	cout << "Enter the meter reading in the current month (in gallons):";
	cin >> currentreading;
	
	bill = bill + (currentreading * charge);
	if (prevreading >0)
	{
		bill = bill + latecharge;
	}
	
	cout << "Your total water bill is: " << bill;
    getch ();
	return 0;
}


//PROBLEM 3
#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main ()
{
	int x;
	float y, V;
	float z=2.5;
	
	cout << "Enter the value of x: ";
	cin >> x;
	cout << "Enter the value of y: ";
	cin >> y;
	
	switch (x){
		case 1:
			if (y > 1 && y < 5){
				V = x*y*z;
			}
			
			else if (y >= 5){
				V = x + y/z;
			}
			break;
		
		case 2:
			if (y <= 5){
				V = fabs((x-y)/z);
			}
			
			else if (y > 5){
				V = x- sqrt(y+z);
			}
			break;
		
		default:
			V = x + y + z;
		
	}
	
	cout<<fixed<<setprecision(2);
	cout<<setw(10)<<setfill(' ')<<V;
	
	getch ();
	return 0;
}


//PROBLEM 4
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int x;
	int count = 1;
	
	x = 1;
	do 
	{
	cout << x;
		x = x + count;
		
		if (x >= 10){
			count = 2;
		}
		
		if (x<=30){
			cout <<","; 
		}
	}
	
	while (x<=30);
	
	getch ();
	return 0;
}
	
	
//PROBLEM 5
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int x = 0;
	int y = 1;
	int z;
	int i;
	
		cout << x << "," << y << ",";
		for (i=3; i<=22; i++){
		z = x + y;
		x = y;
		y = z;
		
		cout <<z;
		
		if (i<22){
			cout << ",";
		}
			
	}
	getch ();
	return 0;
}



//PROBLEM 6
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int number1, sum;
	
	cout << "Enter a number: ";
	cin >> number1;
	
	while (number1 >0){
		sum = 0;
	
	for (int x=1; x<=number1; x++){
		sum = sum + x;
    }
	
	cout << "The sum from 1 to " <<number1<< " is " << sum; 
	
	cout << "\nEnter a number: ";
	cin >> number1;
    }
    
    cout << "Thank you!";
    
    getch();
    return 0;
}	
	
	
	
	
