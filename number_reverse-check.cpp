#include <bits/stdc++.h>
using namespace std;

int main(){
    //Reverse a given number n
        int n;
        cout << ("Enter n : ");
        cin >> n;

        int reverse = 0;
        while(n>0){
            int lastDigit = n%10;
            reverse = reverse*10 + lastDigit; //if the number is 1234 (not 1 2 3 4. it's 1,234)
            n = n/10;                         //we will make it to (4,321).
            //first of all, wee need to make the 4th position to 1st position.
            //then, 3rd to 2nd position
            //then, 2nd to 3rd position
            //then 1st to last position            
        }

        cout << (reverse) << endl;

        //check if a number is armstrong or not
        //armstrong number is that number which summation of every digit's cube is that number.
        //let's code to find armstrong number
        int number;
        cout << ("Enter number : ");
        cin >>number;
        //checking...
        int sum = 0;
            int originalNum = number;
        while(number>0){
            int lastNum = number%10; //finding the last number
            sum += pow(lastNum, 3); //adding the cube
            number = number/10;
        }
        if(sum==originalNum){
            cout << ("Armstrong") << endl; //checking if equal to original number or not
        }
        else{
            cout << ("Non-armstrong") << endl;
        }
    return 0;
}