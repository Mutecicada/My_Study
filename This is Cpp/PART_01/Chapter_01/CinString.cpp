#include <iostream>
#include <string>
#include <cstdio>

int main(int argc, char* argv[])
{
	int nAge;
	std::cout << "Age" << std::endl;
	// std::endl -> 개행 // 대신 '\n'도 가능 // \n이 더 빠름 대신 endl은 flush하는 것 까지 포함 
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
