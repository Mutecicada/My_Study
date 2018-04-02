#include <iostream>

using namespace std;

int nData = 100;

namespace TEST
{
	int nData = 200;
}

int main(int argc, char* agrv[])
{
	cout << nData << endl;
}

