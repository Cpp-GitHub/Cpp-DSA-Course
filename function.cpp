#include <bits/stdc++.h>
using namespace std;

int addition(int n1, int n2){
    int sum = n1 + n2;
    return sum;
}

int main(){
    //Functions is C++
    //function is a block of code to perform a specific task.

    //syntax of a function:
    /*returnType functionName(param1, param2){
        function body //returnType is type which is the type of data which give in.
    }*/

    //examples of functions
        //function to add 2 integer number
        int a = 89;
        int b = 56;
        cout << addition(a, b) << endl;
        //in function, we just pass the value of those local variable, not the variable 
        //and the datatype. then, variable by name of param is created.Then pass the value of those local variable and return the value.Function is executed by code given by the user.  
    return 0;
}