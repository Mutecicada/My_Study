#include <cstdio>

class USERDATA
{
public:
	// ��� ���� ���� 
	int nAge;
	char szName[32];
	
	// ��� �Լ� ���� �� ���� 
	void Print(void)
	{
		printf("%d, %s\n", nAge, szName);
	}
};

int main(int argc, char* argv[])
{
	USERDATA user = {10, "ö��"};
	user.Print();
	
	return 0;
}
