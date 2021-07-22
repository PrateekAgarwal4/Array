#include<bits/stdc++.h>
using namespace std;
int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,d,f=0;
      cin>>n>>d;
      int a[n];
      for(int i=0;i<n;i++)
      cin>>a[i];
      sort(a,a+n);
      int i=0,j=1;
      while(i<n&&j<n)
      {
          if(i!=j&&a[j]-a[i]==d)
          {
          f=1;
          break;
          }
          else if(a[j]-a[i]<d)
          j++;
          else
          i++;
     }
     if(f)
     cout<<1<<endl;
     else
     cout<<-1<<endl;   
  }
	return 0;
}
