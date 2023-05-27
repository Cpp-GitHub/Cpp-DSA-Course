#include <bits/stdc++.h>
using namespace std;

int main()
{
	// loops in c++
	// loop is a function which is used to do repeated task.
	// There are 3 types of loop in C++
	// 1.for loop
	// 2.while loop
	// 3.do-while loop

	// for loop
	// find factorial of a number by for loop
	int n;
	cout << ("Enter n : ");
	cin >> n;
	int factorial = 1;
	for (int i = 1; i <= n; i++)
	{
		factorial = (factorial * i);
		
	}
	cout << factorial << endl;

	//while loop
	//checking a number if it is odd or not
	int b = 56;
	while(b%2==0){
		cout <<b << endl;
		break;
	}

	//do while loop
	//writing a multiplication table by do while loop
	int a = 6;
	int number = 1;
	do
	{
		cout << (a) << ( "X") << (number) <<( "=") << (a*number) << endl;
		number++;
	} while (number<=10);
	


	return 0;
}