#include <bits/stdc++.h>
using namespace std;

int main(){
	//break-continue in C++
	//break is a function when this is used on that time if the statement is true it stopped the function on that time.
	//continue is same as break.Just difference is it skipped the given part.Then print the next iteration

	//let's do some work on break-continue
	int n;
	cout << ("Enter n : ");
	cin >>n;
	for(int i=1; i<n; i++){
		if(i%2==0){
			continue;
		}cout <<i << endl;
	}
	//skipped the even numbers

	//check if a number is prime or not
	int m;
	cout << ("Enter m : ");
	cin >>m;
	int i;
	for(i=2; i<m; i++){
		if(m%i==0){
			cout << ("Non prime") << endl;
			break;
	}

	}
		
	if(i==m){
		cout << ("Prime") << endl;
	}

	// problem
	int a, b;
	cout << ("Enter a, b : ");
	cin >>a >>b;
	for(int num=a; num<b; num++){
		int i;
		for(i=2; i<num; i++){
			if(num%i==0){
				break;
			}
		}
		if(i==num){
		cout << num << endl;
	}
	}	
	return 0;
}