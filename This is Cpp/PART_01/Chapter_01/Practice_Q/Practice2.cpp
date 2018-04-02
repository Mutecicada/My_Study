#include <iostream>
using namespace std;

int main(int argc, char* argv[])		// 초깃값 형식에 맞춰 선언하는 인스턴스의 형식이 자동으로 결정, 범위 기반 for문에서 사용 
{
	int arr[5] = {10, 20, 30, 40, 50};
	
	for(auto n : arr)	cout << n << endl;
	
	int a = 60;
	auto b(a);
	
	cout << b << endl;	
	
	return 0;
}
