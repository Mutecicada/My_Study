#include <iostream>

using namespace std;

class CTest
{
	public:
		CTest(int nParam) : m_nData(nParam) { };
		~CTest() {	}
		
		int GetData() const
		{
			// 멤버 변수의 값을 읽을 수는 있지만 쓸 수는 없다. 
			return m_nData;
		}
		
		int SetData(int nParam) { m_nData = nParam;	}
		
	private:
		int m_nData = 0;
};

int main(int argc, char* argv[])
{
	CTest a(10);
	cout << a.GetData() << endl;
	
	return 0;
}
