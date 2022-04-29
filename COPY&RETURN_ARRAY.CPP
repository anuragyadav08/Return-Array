
#include <iostream>
using namespace std;
 
int* fun(int _arr[],int n,int b[])
{
    
   
  for(int i=0;i<n;i++)
   {
       b[i]=_arr[i];
   }
    return b;
}
 
int main()
{
    int _arr[100],n,b[100];
    cout<<"Enter Size :";
    cin>>n;
     cout<<"Enter Array :\n";    
   for(int i=0;i<n;i++)
   {
       cin>>_arr[i];
   }
    int* ptr = fun(_arr,n,b);
    cout<<"Output Array : ";
     for(int i=0;i<n;i++)
   {
       cout<<*(ptr+i)<<",";
   }
    return 0;
}