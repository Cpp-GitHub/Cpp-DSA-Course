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
	for(int k=1; k<n; k++){
		if(k%2==0){
			continue;
		}cout <<k << endl;
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
		int c;
		for(c=2; c<num; c++){
			if(num%c==0){
				break;
			}
		}
		if(c==num){
		cout << num << endl;
	}
	}	
	return 0;
}