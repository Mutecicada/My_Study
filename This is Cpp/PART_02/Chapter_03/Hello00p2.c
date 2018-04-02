#include <stdio.h>

typedef struct USERDATA
{
	int nAge;
	char szName[32];
} USERDATA;

void PrintData(USERDATA *pUser)
{
	printf("%d, %s\n", pUser->nAge, pUser->szName);
}

int main()
{
	USERDATA user = {20, "Ã¶¼ö"};
	// printf("%d, %s\n, uwer.nAge, user.szName);
	
	PrintData(&user);
	
	
	return 0;
}
