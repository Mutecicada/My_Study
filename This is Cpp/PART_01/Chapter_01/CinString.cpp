#include <iostream>
#include <string>
#include <cstdio>

int main(int argc, char* argv[])
{
	int nAge;
	std::cout << "Age" << std::endl;
	// std::endl -> ���� // ��� '\n'�� ���� // \n�� �� ���� ��� endl�� flush�ϴ� �� ���� ���� 
	std::cin >> nAge;
	
	char szJob[32];
	std::cout << "Job" << std::endl;
	std::cin >> szJob;
	
	std::string strName;
	std::cout << "Name" << std::endl;
	std::cin >> strName;
	
	std::cout << strName << nAge << szJob << std::endl;
	
	
	return 0;
}
