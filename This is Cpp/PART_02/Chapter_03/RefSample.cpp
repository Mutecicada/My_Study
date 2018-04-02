#include <iostream>
using namespace std;

class CRefTest
{
	public:
		CRefTest(int &rParam) : m_nData(rParam) { };
		int GetData(void) { return m_nData;	}
		
	private:
		// 참조형 멤버는 객체가 생성될 때 반드시 초기화해야 한다.
		int &m_nData; 
};

int main(int argc, char* argv[])
{
	int a = 10;
	CRefTest t(a);
	
	cout << t.GetData() << endl;
	
	// 참조 원본인 a의 값이 수저오디었다.
	a = 20;
	cout << t.GetData() << endl;
	
	return 0; 
}
