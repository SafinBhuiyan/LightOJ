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
    for(i=1; i<=n; i++)
    {
        int num;
        cin>>num;
        cout<<"Case "<<i<<":";
        int j;
        for(j=1; j<=num; j++)
        {
            if(num%j==0)
            {
               cout<<" "<<j;
            }
        }
        cout<<endl;
    }

	return 0;
}
