#include <iostream>
using namespace std;

class CTest
{
	public:
		CTest(int a, int b)
		{
			m_nData1 = a;
			m_nData2 = b;
		}	
		
		int m_nData1;
		int m_nData2;
		
		void PrintData(void)
		{
			cout << m_nData1 << endl;
			cout << m_nData2 << endl;
		}
};

int main(int argc, char* argv[])
{
	CTest t(10, 20);
	t.PrintData();
	
	return 0;
}
