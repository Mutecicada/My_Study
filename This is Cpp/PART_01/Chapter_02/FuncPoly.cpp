#include <iostream>
using namespace std;

int Add(int a, int b, int c)
{
	cout << "Add(int, int, int,) : ";
	
	return a + b + c;
}

int Add(int a, int b)
{
	cout << "Add(int, int) : ";
	
	return a + b;
}

double Add(double a, double b)
{
	cout << "Add(double, double) : ";
	
	return a + b;
}

int main(int argc, char* argv[])
{
	cout << Add(3, 4) << endl;
	cout << Add(3, 4, 5) << endl;
	cout << Add(3.3, 4.4) << endl;
	
	return 0;
}
