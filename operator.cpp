#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Operators in C++
    //Arithmetic Operators & Operations
    int a, b;
    cout << ("Enter a & b : ");
    cin >> a >> b;
    cout << (a+b) << endl; //summation of a and b
    cout << (a-b) << endl; //subtraction a and b
    cout << (a*b) << endl; //multiplication of a and b
    cout << (a/b) << endl; //division of a and b
    cout << (a%b) << endl; //modulo of a of b

    //Unary Operators
    //1.Increment (++)
    //2.Decrement (--)
//understanding (++) & (--) by a mathematical problem
    int i=10, j=20, k;
        //10  //9   //19  //20    //9  //19  //10 //19
    k = i-- - i++ + --j - ++j + --i - --j + ++i - j++;
    cout <<i << endl;//10
    cout <<j << endl;//20
    cout <<k << endl; //-19

    //Relational Operators
    //1.Equal (==)
    //2.Not equal  (!=)
    //3.More than (>)
    //4.Less than (<)
    //5.More than or Equal to (>=)
    //6.Less than or Equal to (<=)
    
    //Solve the Question
    int n;
    cout <<("Enter n : ");
    cin >>n;
    if(n>10){
        cout << ("More than 10") << endl;
    }
    else if(n<10){
        cout <<("Less than 10") << endl;
    }
    else{
        cout << ("Equal to 10") << endl;
    }

    //Logical Operators
    //1.and (&&)
    //2.or (||)
    //3.not (!) {just change the value}
    
    //solve the problem
    int m;
    cout << ("Enter m : ");
    cin >>m;
    if(m%2==0 && m%3==0 ){
        cout << ("Divisible by 2 and 3") << endl;
    }
    else if(m%2==0){
        cout << ("Divisible by 2") << endl;
    }
    else{
        cout << ("Divisible by none") << endl;
    }

    //Bitwise Operators
    //1.and operator (&) [1&1=1, 1&0=0, 0&1=0, 0&0=0]
    //2.or operator (|) [1|1=1, 1|0=1, 0|1=1, 0|0=0]
    //3.xor operator (^) [0^0=0, 1^1=0, 0^1=1, 1^0=1]
    //one's complement (make the opposite) [1~=0, 0~=1]
    //4.left shift operator (<<) [shift the value in left of mentioned] {4<<1 [0100](1000)} {a<<n = a*2^n}
    //5. right shift operator (>>) [shift the value in right of mentioned ] {4>>1 [0100] (0010)} {a>>n = a/2^n}

    //assignment operators
    // I know everyone know this operators.So, I don't give these to this course.
}