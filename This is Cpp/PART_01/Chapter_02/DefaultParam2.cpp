#include <iostream>
using namespace std;

int TestFunc(int nParam1 = 1, int nParam2 = 2)
{
	return nParam1 * nParam2;
}

int main(int argc, char* argv[])
{
	cout << TestFunc(2) << endl;
	cout << TestFunc(10, 5) << endl;
	
	return 0;
}
