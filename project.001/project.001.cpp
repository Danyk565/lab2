#include <iostream>
using namespace std;
double max(double a, double b) {
	double max=0;
	if (a > b)
		max = a;
	else
		max = b;
	return max;
}
int main()
{
	cout << "Enter A and B: ";
	double a, b;
	cin >> a >> b;
	cout << "A+B= " << a + b << '\n';
	cout << "A-B= " << a - b << '\n';
	cout << "A*B= " << a * b << '\n';
	cout << "A/B= " << a / b << '\n';
	cout << "Max= " << max(a, b) << '\n';
}