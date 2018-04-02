#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
	string name;
	int age;
	
	cout << "Input Name : ";
	cin >> name;
	
	cout << "Input Age : ";
	cin >> age;
	
	cout << "나의 이름은 " << name << "이고, " << age << "살입니다." << endl; 
	
	return 0;
}
