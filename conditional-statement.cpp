#include <bits/stdc++.h>
using namespace std;

int main(){
	//conditional statements in C++
	/*There are 4 types of statement in C++*/

	//1.if statement
	//2.else if statement
	//3.else statement
	//4. nested if else if else statement

	//let's solve some problem by statement
	//check if I can drive or can't drive

	int age;
	cout << ("Enter age : ");
	cin >> age;

	if(age<10){
		cout << ("you are a kid. you can't think of drive") << endl;
	}
	else if(age<=15){
		cout << ("After 18, you can drive after getting driving license") << endl;
	}
	else{
		cout << ("Now, you can drive") << endl;
	}
	//let's check our code
	//It seems our code is correct.

	//let's work on nested condition
	//print out the biggest on given 4 numbers
	int a, b, c, d;
	cout << ("Enter a, b, c, d : ");
	cin >>a >>b >>c >>d;
	//checking the numbers
	if(a>b){
		if(a>c){
			if(a>d){
				cout <<a << endl;
			}
		}
	}
	else if(b>c){
		if(b>d){
			if(b>a){
				cout << b << endl;
			}
		}
	}
if(c>d){
	if(c>b){
		if(c>a){
			cout << c<< endl;
		}
	}
}
else if(d>c){
	if(d>b){
		if(d>a){
			cout << d << endl;
		}
	}
}
//It seems our code is worked.
	return 0;
}