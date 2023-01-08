#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
    #endif

        int t;
        cin>>t;

        char str[120];
        for (int i = 0; i < t; ++i)
        {
        	cin>>str;

        	int num=strlen(str);

        if (str[num-1]%2==0)
        {
        	cout<<"even"<<endl;
        }
        else cout<<"odd"<<endl;
    }
	return 0;
}
