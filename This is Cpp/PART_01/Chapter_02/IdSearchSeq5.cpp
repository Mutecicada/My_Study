#include <iostream>
using namespace std;

int nData = 100;

namespace TEST
{
	int nData = 200;
} 

using namespace TEST;

int main(int agrc, char* argv[])
{
	cout << nData << endl;			// 오류 발생이 정상 
									// ::Data or TEST::nData 처럼 정확히 해야한다. 
	
	return 0;
}
