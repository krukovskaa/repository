#include "windows.h"
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int A;
	cout << "\nInput 'A': ";
	cin >> A;
	(A < 0 && A % 2 == 0) ? cout << "\n'A' is even and negative\n" : cout << "\n'A' is not even and negative\n" << endl;
	system("pause");
	return 0;
}