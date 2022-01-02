#include<iostream>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		int rem =n%10;
		if(rem==0)
		{
			n=n/10;
		}
		else{
			n=n-1;
		}
	}
	cout<<n<<endl;
	
}

