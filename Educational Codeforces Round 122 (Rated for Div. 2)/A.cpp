#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--) {
    	int n;
    	cin>>n;
    	
    	if(n%7 == 0) {       // if n is divisible by 7 then print n directly ...
    		cout<<n<<endl;
    		continue;
		}
		
		int flag=0 ,o = n;
		
		int rem = n%10; // remainder hai 
		int k = 9-rem;  // n-remainder kar lia fir 
		while(k--) {
			n++;
			if(n%7 == 0) {
				flag = 1;
				break;
			}
		}
		
		if(flag) {
			cout<<n<<endl;
			continue;
		}
		
		while(rem--) {
			o--;
			if(o%7 == 0) {
				break;
			}
		}
		cout<<o<<endl;
		
	}
	return 0;
}
