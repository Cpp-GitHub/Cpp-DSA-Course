#include <bits/stdc++.h>
using namespace std;

bool Prime(int n){
    for(int k=2; k<=sqrt(n); k++){
        if(n%k==0){
            return false;
        }
    }
    return true;
}

void fibonacci(int n){
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for(int c=1; c<=n; c++){
        cout <<t1<<endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int factorial(int n){
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial*=i;
    }
    return factorial;
}

int combination(int n, int r){
    int factorial = 1; //n!
    for(int i=1; i<=n; i++){
        factorial *=i;
    }
    int fact = 1; //r!
    for(int j=1; j<=r; j++){
        fact*=j;
    }
    int dif = n-r;
    int f = 1; //(n-r)!
    for(int k=1; k<=dif; k++){
        f*=k;
    }
    return factorial/(fact*f); //n!/r!(n-r)!
}

int fact(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    //print prime numbers between a & b
    int a, b;
    cout << ("Enter a & b : ");
    cin >>a >>b;

    for(int i=a; i<=b; i++){
        if(Prime(i)){
            cout <<i << endl;
        }
    }

    //find fibonacci sequence of nth term
    int z;
    cout << ("Enter z : ");
    cin >>z;

    fibonacci(z);

    //find factorial of a number b
    int x;
    cout << ("Enter x : ");
    cin >>x;
    cout << factorial(x) << endl; //function is written

    //calculate nCr
        int m, n;
        cout << ("Enter m & n : ");
        cin >>m >>n;
            cout << combination(m, n) << endl; //challenge done

    //find pascal triangle
        int d;
    cout << ("Enter d : ");
    cin >>d;
    for(int l=0; l<=n; l++){
        for(int h=0; h<=l; h++){
            cout << factorial(l)/(factorial(l-h) * factorial(h)) << " ";
        }
        cout <<endl;
    }
    return 0;
}