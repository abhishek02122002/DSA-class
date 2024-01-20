#include<iostream>
using namespace std;
#include<list>
#include<algorithm>
#include<vector>

int main(void)
{
     list<int> l;
     int n,sum=0;
     cin>>n;
     if(n>15)
     {
          cout<<"-1";
          return 0;
     }
     int a[n];
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     l.assign(a,a+n);
     l.sort();
     l.unique();
     for(list<int>::iterator x=l.begin(); x!=l.end();x++)
     {
          sum=sum+ *x;
          cout<<sum;
     }
     //
     return 0;
}