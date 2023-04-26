#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl;
	int c = 0; c = a; a = b; b = c;
	cout << a << "\t" << b << endl;
	


}