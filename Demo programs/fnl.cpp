#include <iostream>
#include <fstream>

using namespace std;

int main () {

	fstream infiler ("fnl.in");	

	int n = 0; string s = "";
	infiler >> n;

	for (int i = 0; i < n; i++){
		infiler >> s;
		cout << s << endl;
	}
	

	return 0;
}




