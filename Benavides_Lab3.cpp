// Mario Benavides
// Lab 3 - Complete
// This program determines which of a company's four divisions 
// (NE, NW, SE, SW) had the greatest sales for a quarter.   

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// function prototypes
double getSales(string); 		
void findHighest(double, double, double, double);


int main()
{
	double NE, SE, NW, SW;
	
// call the getSales function 4 times, passing it the division name	
	NE = getSales("Northeast"); 	
	NW = getSales("Northwest");
	SE = getSales("Southeast");
	SW = getSales("Southwest");
	
// call the findHighest function	
	findHighest(NE, NW, SE, SW); 		// passing the four sales figures
	return 0;
}


double getSales(string Division)
{
	double Sales;

	do
	{
		cout << "Enter the quarterly sales for the " << Division << " division: ";
    	cin  >> Sales; 		// accept input of the quarterly sales from the user

    	if (Sales < 0) 		// input validation
    		cout << "Sales figures cannot be negative. Please re-enter:" << endl;
    } 
    
	while (Sales < 0);
    return Sales;
}


void findHighest(double NE, double NW, double SE, double SW)
{
	double Division;
 
	cout << endl; 		// new line
	cout << "The "; 
	
// determine which is the highest of the four
	if (NE > SE && NE > NW && NE > SW)
	{
		Division = NE;
			cout << "Northeast ";
	}
	else if (NW > SE && NW > NE && NW > SW)
	{
		Division = NW;
			cout << "Northwest ";
	}
	else if (SE > NE && SE > NW && SE > SW)
	{
		Division = SE;
			cout << "Southeast ";
	}
	else
	{
		Division = SW;
			cout << "Southwest ";
	}

	cout << fixed << showpoint << setprecision(2); 		// formatting
 	cout << "division had the highest sales this quarter." << endl; 
	cout << "Their sales were $" << Division; 
}

