#include <bits/stdc++.h>
using namespace std;

int main(){
	//switch-case statement in C++
	//switch case is like an algorithm.You give the input.And after done the operation, it gives the output.
	//making a calculator by switch-case

	char opera;
	int a;
	int b;
	cout << ("Enter a & b : ");
	cin >> a >>b;
	cout << ("Enter operator : ");
	cin >>opera; //opera is operator

	switch (opera)
	{
	case '+':
		cout << (a+b) << endl;
			break;
	case '-':
		cout << (a-b) << endl;
			break;
	case '*':
		cout << (a*b) << endl;
			break;
	case '/':
		cout << (a/b) << endl;
			break;
	default:
		cout << ("Invalid Operator.Please try again") << endl;
		break;
	}

	//Next project on date
	int date;
	cout << ("Enter date : ");
	cin >>date;
	switch (date)
	{
	case 10:
		cout << ("It's 10 today") << endl;	
		break;
	case 15:
		cout << ("It's 15 today") << endl;	
			break;
		case 20:
			cout << ("It's 20 today") << endl;
				break;
		case 25:
			cout << ("It's 25 today") << endl;
				break;	
	default:
	if(date<1 || date>32){
			cout << ("It's not include in calender") << endl;
	}
		break;
	}
	return 0;
}