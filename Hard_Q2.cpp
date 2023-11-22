/*Given a non-negative integer n. 
The problem is to reverse the bits of n and print the number obtained after reversing the bits.
 Note that the actual binary representation of the number is 
          being considered for reversing the bits, no leadings 0’s are being considered. 
          
          Examples :
Input : 11 
Output : 13 

Explanation: (11)10 = (1011)2. After reversing the bits we get: (1101)2 = (13)10.

Input : 10 
Output : 5 

Explanation : (10)10 = (1010)2. After reversing the bits we get: (0101)2 = (101)2
*/
#include<bits/stdc++.h> 
using namespace std; 
  
// function to convert decimal to binary 
void decToBinary(int n) 
{ 
    int binaryNum[32]; 
  
    
    int i = 0; 
    while (n > 0) { 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    // for (int j = i - 1; j >= 0; j--) {
    //     cout << binaryNum[j]; 
    // }
    // cout<<endl;

    //reverse(binaryNum, binaryNum + 32);

    int num=0;
    int s=0;

    for(int j=i-1;j>=0;j--){
        if(binaryNum[j]==1){
            num=num+binaryNum[j]*pow(2,s);
        }
        //cout<<num<<" ";
        s++;
    }

    cout<<num<<endl;

} 

  

int main() 
{ 
    int n ;
    cout<<"Enter the Number : ";
    cin>>n;
    decToBinary(n); 
    return 0; 
} 
