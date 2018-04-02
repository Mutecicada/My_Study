#include <iostream>

using namespace std;

class CMyData
{
	public:
		CMyData() : m_nData(0) { };
		
		int GetData(void) { return m_nData; }	
		void SetData(int nParam) { m_nData = nParam; }
		
		void SetData(double nParam ) = delete;
		
	private:
		int m_nData;
};

int main(int argc, char* argv[])
{
	CMyData a;
	
	a.SetData(10);
	cout << a.GetData() << endl;
	
	CMyData b;
	
	b.SetData(5.5);				// 컴파일 오류 발생 * 어설프게 작동하는 코드가 더 심각한 문제를 만든다.
								// 오류 발생 가능성을 원천 봉쇄한다. 
	cout << b.GetData() << endl;
	
	return 0; 
}
