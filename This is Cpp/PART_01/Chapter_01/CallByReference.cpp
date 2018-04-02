#include <iostream>

using namespace std;

void TestFunc(int &rParam)
{
	// 피호출자 함수에서 원본의 값 변경 
	rParam = 100;
}

int main(int argc, char* argv[])
{
	int nData = 0;
	
	TestFunc(nData);
	cout << nData << endl;
	
	return 0;
}
