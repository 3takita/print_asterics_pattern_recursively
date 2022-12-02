#include <iostream>
#include <string>
using namespace std;

//Function prototypes:
void drawGroupStars(int n, int numStars, int startNum, bool printLast); //func.h
void callStars(int k); //func.h

int main() {
	cout<<"Enter number: ";
	int num;
	while(!(cin>>num) || num<1) {
		cout<<"Error! Input must be integer >=1: ";
		cin.clear();
		cin.ignore(123,'\n');
	}
	callStars(num); //Calls the star pattern drawing function
      return 0;
}

//Description - Helper Function
//Precondition: User input for caller function must be >= 1. 
//Postcondition: Prints the pattern recursively
void drawGroupStars(int n, int numStars, int startNum, bool printLast) {
	string blanks = "";
	for(int i=1; i<n; i++) {
        blanks = blanks + " ";
	}
	cout<< blanks << "*"<<endl;
    cout<< blanks << "**"<<endl;
	cout<< blanks << " *"<<endl;
	if(printLast == true) {
	    blanks = "";
	    for(int i=1; i<startNum; i++) {
            blanks = blanks + " ";
	    }
	    cout<<blanks;
	
	    for(int i=0; i<numStars; i++) {
		    cout<<"*";
	    }
	    cout<<endl;
	}
	
	if(n==3 || n==5 || n==7) {
		return;
	}
	drawGroupStars(n+2, 8, 1, true);
	drawGroupStars(n+4, 4, n+4, true);
	drawGroupStars(n+6, 4, 5, false); 
} 

//Description - Caller function (calls the helper function)
//Pre-condition: User input must be equal or greater than 1.
//Post-condition: Calls the printing function as oftern as user specifies
void callStars(int k) { //make it so user can chose how many 
	for(int i=0; i<k; i++) {
		cout<<endl;
	    drawGroupStars(1, 4, 1, true);
	}
}
