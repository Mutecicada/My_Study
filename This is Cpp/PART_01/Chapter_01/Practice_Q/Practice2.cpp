#include <iostream>
using namespace std;

int main(int argc, char* argv[])		// �ʱ갪 ���Ŀ� ���� �����ϴ� �ν��Ͻ��� ������ �ڵ����� ����, ���� ��� for������ ��� 
{
	int arr[5] = {10, 20, 30, 40, 50};
	
	for(auto n : arr)	cout << n << endl;
	
	int a = 60;
	auto b(a);
	
	cout << b << endl;	
	
	return 0;
}
