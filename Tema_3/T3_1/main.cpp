#include <iostream>
#include <string>
#include "rectangle.h";
using namespace std;

int main()
{
    double n, m;
    cin >> n >> m;
	rectangle R(n,m);
	double p = R.perimeter();
	double x = R.area();
	cout << p << " " << x;
	return 0;
}
