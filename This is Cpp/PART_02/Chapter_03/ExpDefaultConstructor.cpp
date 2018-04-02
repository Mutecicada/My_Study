#include <iostream>
using namespace std;

class CTest
{
	public:
		CTest(void);
		//CTest(void) = default;
		int m_nData = 5;		
};

CTest::CTest(void) {}

int main(int argc, char* argv[])
{
	CTest a;
	cout << a.m_nData << endl;
	
	return 0;
}
