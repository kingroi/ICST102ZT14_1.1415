/*
parampass.cpp
"a simple c++ program that demonstrates principles of parameter passing"

contributors:
neithan
mayen
pat
belle
jedd
*/

#include <iostream>
#include <cmath>
using namespace std;

//shuffle is a function that will change the value of the contestant variable in main to  "Ricky"
string shuffle(string& name){
	//return "Ricky";
	name = "Ricky";
}
//squareFXT is a pass-by-value function that will print the square of FXT
void squareFXT(int fxt){
cout << pow(fxt,2);
}

//changeNRQ is a pass-by-reference function that will change the value of NRQ to 39
void changeNRQ(int &a) {
	a = 39;
}


//sumSquare is a pass-by-value function that will print the sum of NRQ, FXT and RRB raised to XTR
void sumSquare(int num1, int num2, int num3, double num4){
	cout << ((num1 + num2 + num3) ^ (int)num4);
}

int main () {

	string contestant = "sandra";
	int NRQ = 14;
	int FXT = 24;
	int RRB = 11;

	double xtr = 2;

	shuffle(contestant);
	
	squareFXT(FXT);

	changeNRQ(NRQ);
	//cout << NRQ << endl;

	sumSquare(NRQ, FXT, RRB, xtr);
	
	cout << contestant << endl;
	cout << "NRQ: " << NRQ << endl;
	cout << "FXT: " << FXT << endl;
	cout << "RRB: " << RRB << endl;

	return 0;

}
