#include <iostream>
using namespace std;

int LinearSearch(int array[], int n, int key){
    for(int i=0; i<n; i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
}

int BinarySearch(int array[], int n, int key){
    int start = 0;
    int end = n;

    while(start <= end){
        int mid = (start + end)/2;

        if(array[mid] == key){
            return mid;
        }
        else if(array[mid] > key){
            end = mid-1;
        }
        else{
            start = mid +1;
        }
    }
    return -1;
}

int main(){
    //there are 2 types of search available in arrays.
    //1.Linear Search
    //2. Binary Search
    
    //Let's do linear search.
    int n;
    cin >> n;

    int array[n];
    for(int i=0; i<n; i++){
        cin >> array[i];
    }

    int key; //use for searching element
    cin >> key;

        cout << LinearSearch(array, n, key) << endl;
//our code successfully executed.

//binary search
    int m;
    cin >> m;

    int arr[m];
    for(int j=0; j<m; j++){
        cin >> arr[j];
    }
    int ke;
    cin >> ke;

        cout << BinarySearch(arr, m, ke) << endl;
    return 0;
}
