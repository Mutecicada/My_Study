#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main(int argc, char* argv[])
{
	int x = 10, y = 20;
	
	cout << "Before Swap" << endl;
	cout << "x : " << x << endl;
	cout << "y : " << y << endl << endl;
	
	Swap(x, y);
	
	cout << "After Swap" << endl;
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
	
	return 0;
}
