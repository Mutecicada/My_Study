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
	TestFunc(5) // 컴파일 오류 이유는 위에 함수인지 아래 함수인지 모호해서 
	
	return 0;
}
