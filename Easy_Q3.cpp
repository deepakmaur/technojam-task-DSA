/*

3. Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.
Note: There are no duplicates in the list.

Examples:

Input: arr[] = {1, 2, 4, 6, 3, 7, 8}, N=7
Output: 5 Explanation: Here the size of the array is 7, so the range will be [1, 8]. The missing number between 1 to 8 is 5

Input: arr[] = {1, 2, 3, 5}, N = 5 
Output: 4 Explanation: Here the size of the array is 4, so the range will be [1, 5]. The


*/

#include<bits/stdc++.h>
#include<array>
using namespace std;



int missingNumber(vector<int>& arr, int n) {
    // Your code goes here
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        if(arr[i]!=i+1){
            return i+1;
        }
    }
}



//{ Driver Code Starts.
int main() {
    
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        a.push_back(element);
    }
        
    int t;
    cin >> t;
        
    int ans = missingNumber(a,t);
    cout <<ans;
    
    return 0;
}
