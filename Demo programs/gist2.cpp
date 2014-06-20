#include <iostream>
#include <fstream> //!

using namespace std;

int main () {

	int x = 0;
	string y = "";

	fstream cfile("jarvis.xtf");
	cfile >> x >> y;	//!
	cout << "x: " << x << " \ny: " << y << endl;

	return 0;
}
