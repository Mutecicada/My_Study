#include <iostream>
using namespace std;

void TestFunc(int a)
{
	cout << "TestFunc(int)" << endl;
}

void TestFunc(int a, int b = 10)
{
	cout << "TestFunc(int, int)" << endl;
}

int main(int agrc, char* argv[])
{
	TestFunc(5) // ������ ���� ������ ���� �Լ����� �Ʒ� �Լ����� ��ȣ�ؼ� 
	
	return 0;
}
