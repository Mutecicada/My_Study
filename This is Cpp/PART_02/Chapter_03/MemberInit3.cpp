#include <iostream>
using namespace std;

class CTest
{
	public:
		CTest()
		{
			cout << "CTest() : ������ �Լ�" << endl;
			m_nData = 10;
		}
		
		int m_nData;
		
		void PrintData(void);
};

void CTest::PrintData(void)
{
	cout << m_nData << endl;
}

int main(int argc, char* argv[])
{
	cout << "main() �Լ� ����" << endl;
	
	CTest t;
	t.PrintData();
	
	cout << "main() �Լ� ��" << endl;
}
