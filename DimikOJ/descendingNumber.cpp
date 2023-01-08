#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
    #endif

        int i;
        for (i = 1000; i >0; i--)
        {
        	cout<<i<<" ";

        	 if( (i-1)%5==0)
        {
            cout<<endl;
        }
     }

	return 0;
}
