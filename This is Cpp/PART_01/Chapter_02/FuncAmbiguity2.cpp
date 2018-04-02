#include <iostream>
using namespace std;

template <typename T>			// 인자 수 변경은 안되나 보다. 
T Add(T a, T b)
{
	return a + b;
}

int main(int argc, char* argv[])
{
	cout << Add(3, 4) << endl;
	cout << Add(3.3, 4.4) << endl;

	return 0;
}
