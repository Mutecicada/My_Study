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
	cout << nData << endl;			// ���� �߻��� ���� 
									// ::Data or TEST::nData ó�� ��Ȯ�� �ؾ��Ѵ�. 
	
	return 0;
}
