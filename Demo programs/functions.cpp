#include <iostream>
using namespace std;

void print(int n) {
	if (n == 0)
		return;
	else{
		cout << n << endl;
		print(n-1);
	}
}

void replace (int &a, int &b){
	a = 19;
	b = 19;
}

int main () {

	int x = 0, y = 9;
	replace(x,y);
	cout << x << " " << y << endl;
	return 0;
}
