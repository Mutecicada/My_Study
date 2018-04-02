#include <cstdio>

class USERDATA
{
public:
	// 멤버 변수 선언 
	int nAge;
	char szName[32];
	
	// 멤버 함수 선언 및 정의 
	void Print(void)
	{
		printf("%d, %s\n", nAge, szName);
	}
};

int main(int argc, char* argv[])
{
	USERDATA user = {10, "철수"};
	user.Print();
	
	return 0;
}
