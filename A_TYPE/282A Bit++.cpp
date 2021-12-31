#include<iostream>

using namespace std;


int main()
{   int num;
    cin>>num;
    string str;
    int x(0);
    while(num--)
    {
    	
    	cin>>str;

    	{
    		if(str[1]=='+')
    		{
    			++x;
			}
			else{
				x--;
			}
		}
	}
	cout<<x;

}

