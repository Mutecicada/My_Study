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
	//int nData = 100;			//�갡 �������� 200 ����ε� �������� ������ �����Ͽ��� 
}

int main(int argc, char* argv[])
{
	TEST::TestFunc();
	
	return 0;
}
