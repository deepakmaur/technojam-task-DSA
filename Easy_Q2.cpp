/*

 2. Given an array of N integers, and an integer K, 
                  the task is to find the number of pairs of integers in 
                                       the array whose sum is equal to K.
Examples:

Input: arr[] = {1, 5, 7, -1}, K = 6 
Output: 2 Explanation: Pairs with sum 6 are (1, 5) and (7, -1).

Input: arr[] = {1, 5, 7, -1, 5}, K = 6 
Output: 3 Explanation: Pairs with sum 6 are (1, 5), (7, -1) & (1, 5).

Input: arr[] = {1, 1, 1, 1}, K = 2 
Output: 6 Explanation: Pairs with sum 2 are (1, 1), (1, 1), (1, 1), (1, 1), (1, 1).

Input: arr[] = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1}, K = 11 
Output: 9 Explanation: Pairs with sum 11 are (10, 1), (10, 1), (10, 1), (12, -1), (10, 1), (10, 1), (10, 1), (7, 4), (6, 5).

*/
#include<iostream>
#include<vector>
using namespace std;

//Same approach as  two sum problem

int leng(vector<int> vc,int k){
    vector<vector<int>> pair;
    int k2=0;
    for(int i=0;i<vc.size()-1;i++){
        vector<int> v;
        for(int j=i+1;j<vc.size();j++){
            if(vc[i]+vc[j]==k){
                v.push_back(vc[i]);
                v.push_back(vc[j]);
                k2++;
            }
        }
        pair.push_back(v);
    }

    return k2;
}





int main(){
    vector<int> vc;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        vc.push_back(element);
    }

    int t;
    cout<<"Enter the target sum; ";
    cin>>t;
    cout<<leng(vc,t);
    return 0;
}
