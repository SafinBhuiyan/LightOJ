#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int i;
    for (int i = 1; i <=n; i++)
    {
        int num;
        cin>>num;
        for (int j = 0; j < num; j++)
        {
            
        for (int k = 0; k < num; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
        if (i!=n)
        {
            cout<<endl;
        }
    }
	return 0;
}
