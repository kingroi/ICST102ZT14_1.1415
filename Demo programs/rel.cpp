#include <iostream>
#include <fstream>

using namespace std;

int main () {

	int tc = 0;
	string tc2 = "";

	fstream infiler("rel.in");
	
	while (infiler >> tc2 >> tc){ 
		// in this part of the code
		// we already have power over tc2 and tc
		// print the string tc times	

		for (int i = 0; i < tc; i++)
			cout << tc2 << " ";

		cout << endl;
	
		//cout << tc2 << " " << tc << endl;
	}

	return 0;
}





