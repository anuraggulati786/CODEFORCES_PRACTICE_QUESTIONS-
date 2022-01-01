#include<iostream>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;


int main()
{ 
    int k,n,w;
    cin>>k>>n>>w;
    int count =0;
    int totaldollar=0;
    int i=1;
    while(w--)
    {
    	totaldollar=totaldollar+ (i*k);
    	i++;
    	
	}
	int ds=(totaldollar-n);
	if(ds<=0)
	cout<<0<<endl;
	else{
		cout<<ds<<endl;
	}
 }

