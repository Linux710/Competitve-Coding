// C++ program to print max sum in the array at any index
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int maxSumArray(int a[], int size)
{
	int  maxi = 0;
int sum=0;
	for (int i = 0; i < size-1; i++)
	{ 
	    maxi = a[i];
	    
	    for(int j=i+1; j<size; j++)
	    {
		
		if (maxi + a[j] < maxi)
		{
		    continue;
		}

		if (maxi + a[j] >= maxi)
		{
			maxi = maxi + a[j];
	    }
	    }
	    
	    sum=std::max(sum ,maxi);
	    
	}
	
	return sum; //max sum
}


int main()
{
	int a[] = {0,-4,1,3,3};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSumArray(a, n);
	cout << max_sum;
	return 0;
}
