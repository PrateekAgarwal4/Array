/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[10]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    int mx=b[0];
    for(int i=0;i<10;i++)
    {
        if(b[i]>0)
        {
            mx=max(mx,b[i]);
        }
    }
    cout<<mx;
    
}
