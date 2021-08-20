#include <bits/stdc++.h>
using namespace std;

// find prime numbers upto n using
// SieveOfEratosthenes algorithm
	
void SieveOfEratosthenes(int n)
{
    vector<bool> prime(n+1,true);
    
    // for(auto i : prime)
    // {
    //   cout<<i;
    // }
    
    for(int p=2 ; p*p <=n ; p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*p ; i<=n ; i+=p)
            {
                prime[i]=false;
            }
        }
    }
    
    
    for(int p=2 ; p<=n ; ++p)
    {
      if(prime[p])
      {
          cout<<p<<" ";
      }
    
    }
    
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	SieveOfEratosthenes(n);
	return 0;
}
	
