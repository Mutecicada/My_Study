#include <iostream>
using namespace std;

int nData = 200;

namespace TEST
{
	int nData = 100;
	void TestFunc(void)
	{
		cout << nData << endl;
	}
	//int nData = 100;			//얘가 여깄으면 200 출력인데 전역변수 없으면 컴파일에러 
}

int main(int argc, char* argv[])
{
	TEST::TestFunc();
	
	return 0;
}
