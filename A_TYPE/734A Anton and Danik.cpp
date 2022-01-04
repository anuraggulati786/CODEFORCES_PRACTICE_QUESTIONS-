//4032948   Jul 7, 2013 6:21:47 AM	fuwutu	 41A - Translation	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++) {
    	char x;
    	cin>>x;
    	if(x=='A') {
    		cnt1+=1;
		}
		else{
			cnt2+=1;
			
		}
    	
	}
	
	if(cnt1>cnt2){
		cout<<"Anton"<<endl;
	}
	else if(cnt2>cnt1) {
		cout<<"Danik"<<endl;
	}
	else{
		cout<<"Friendship"<<endl;
	}
    return 0;
}
