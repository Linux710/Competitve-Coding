//  return the start and end position of subarray with given sum
// n=7  sum=78
// array=[1,2,3,4,4,71,7]
// result= 6 7   (which is the position of second last and last element of subarray


#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n , s;
    int arr[n];
    cin>>n>>s;
    
    for(int k=0 ;k<n ; k++)
    {
        cin>>arr[k];
    }
    
    int i=0 , j=0 ,st=-1, en=-1,sum=0;
    
//loop for finding the subarray with given sum
     
     while(j<n)
     {
         sum += arr[j];
         while(sum>s)
         {
             sum -= arr[i];
             i++;
            
         }
         
         if(sum==s)
         {
             st=i+1;   // first index of the subarray
             en=j+1;   // last index of the subarray
             break;
         }
         
         j++;
     }
     
     cout<<st<<" "<<en<<endl;
     
     
    return 0;
}
