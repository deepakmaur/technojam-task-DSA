/*
Given two numbers a and b as interval range, the task is to 
                             find the prime numbers in between this interval.
Examples:

Input : a = 1, b = 10 
Output : 2, 3, 5, 7 

Input : a = 10, b = 20 
Output : 11, 13, 17, 19

*/
#include<iostream>
#include<vector>
using namespace std;

bool check(int N){
    for (int i = 2; i <= N / 2; i++) { 
        if (N % i == 0) { 
            return false; 
        } 
    }
    return true; 
}
void prime(int a,int b){
    vector<int> vc;
    for(int i=a+1;i<b;i++){
        if(check(i)){
            vc.push_back(i);
        }
    }

    for(int i=0;i<vc.size();i++){
        cout<<vc[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a,b;
    cin>>a>>b;
    prime(a,b);
    return 0;
}
