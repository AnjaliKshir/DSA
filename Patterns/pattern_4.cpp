#include<iostream>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int i = 1;
    int k;
    
     while(i<=n)
     {
         int j = 1;
         k=i;
         while(j<=i)
         {
             cout<<k++;
             j=j+1;
         }
         cout<<endl;
         i=i+1;
     }   
}
