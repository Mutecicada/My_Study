#include <iostream>
using namespace std;

template <typename T>			// ���� �� ������ �ȵǳ� ����. 
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
