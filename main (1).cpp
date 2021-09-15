/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    int mx=0;
    int idx=0;
    for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      {
        cin>>a[i][j];
      }
    }
    int i=0;
    while(i<r)
    {    int curr=0;
        for(int j=0;j<c;j++)
        {
          curr=curr+a[i][j];
        }
    if(curr>mx)
    {
        mx=curr;
        idx=idx+1;
    }
     i++;
    }
    cout<<endl<<idx;
    
}
