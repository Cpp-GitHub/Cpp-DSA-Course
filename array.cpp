#include <bits/stdc++.h>
using namespace std;

int main(){
    //Array in C++
    //Array is a list of variables of similar type.
    //syntax of array:
    //datatype arrayName[size]
    /*if we want to access an item of an array, 
    simply we write : arrayName[index no]
    In most pf the languages, indexing is start from 0. end to .....*/

    //Array examples:
    //create an array storing integers
    int Integer[4] = {10, 20, 30, 40};
    cout << Integer[0] << endl;
    cout << Integer[1] << endl;

    //taking input from user
    int n;
    cin >>n;
int array[n];
    for(int i=0; i<n; i++){
        cin >> array[i]; 
    }

      for(int i=0; i<n; i++){
        cout << array[i] << " "; 
    }

    //take size of array from user . after creating array, find minimum-maximum sized element from that array.
    int m;
    cin >> m;
int maxNo, minNo;
maxNo = INT_MIN;
minNo = INT_MAX;
    int array[m];
    for(int j=0; j<m; j++){
        cin >> array[j];
    }
for(int j=0; j<m; j++){
    if(array[j]>maxNo){
        maxNo = array[j];
    }
    if(array[j]<minNo){
        minNo = array[j];
    }
}
cout << maxNo << " " << minNo << endl;
    return 0;
}