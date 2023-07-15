#include <iostream>
using namespace std;

int main()
{
    //bubble sort

    /*for bubble sort, if we have n element array, the sorted array we 
    give in n-1 iteration.*/

    int n;
    cin >> n;

    int array[n];
    for(int i=0; i<n; i++)
    {
        cin >> array[i];
    }

    //taking a variable 'counter' for iteration
    int counter = 1;
    
    while(counter < n)
    {
        for(int i = 0; i<n-counter; i++){
            if(array[i] > array[i+1])
            {
                swap(array[i], array[i+1]);
            }
        }
        counter++;
    }

//A loop for print the sorted array
    for(int i=0; i<n; i++)
    {
        cout << array[i] << " ";
    }cout << endl;

}