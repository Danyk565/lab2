#include <iostream>
using namespace std;
int max(int a, int b) {
	int max=0;
	if (a > b)
		max = a;
	else
		max = b;
	return max;
}
int main()
{
	cout << "Enter A and B: ";
	int a, b;
	cin >> a >> b;
	cout << "A+B= " << a + b << '\n';
	cout << "A-B= " << a - b << '\n';
	cout << "A*B= " << a * b << '\n';
	cout << "A/B= " << a / b << '\n';
	cout << "Max= " << max(a, b) << '\n';
}