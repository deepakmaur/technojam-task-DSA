

/*
1.Write a program to reverse an array or string.

Examples:

Input : arr[] = {1, 2, 3} Output : arr[] = {3, 2, 1}

Input : arr[] = {4, 5, 1, 2} Output : arr[] = {2, 1, 5, 4}

*/

#include <algorithm>
#include <iostream>
using namespace std;
 
int main()
{
   
    int s;
    cout<<"Enter the size : ";
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
 
    
 
    
    cout << "Array: ";
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
 
    
    reverse(arr, arr + s);
 
    
    cout<<endl;
    cout << "Reversed Array: ";
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    return 0;
}
