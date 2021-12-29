#include<iostream>

using namespace std;


int main()
{
	  
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
    	cin>>arr[i];
	}
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(arr[i]>=arr[k] &&arr[i]>0)
		{
			count++;
		}
	}
	cout<<count;

}

