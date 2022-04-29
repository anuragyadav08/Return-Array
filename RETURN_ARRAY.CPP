
#include <iostream>
using namespace std;
 
int* fun(int arr[],int n)
{
    cout<<"Enter Array :\n";    
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
 
    return arr;
}
 
int main()
{
    int arr[100],n;
    cout<<"Enter Size :";
    cin>>n;
    int* ptr = fun(arr,n);
    cout<<"Output Array : ";
     for(int i=0;i<n;i++)
   {
       cout<<*(ptr+i)<<",";
   }
    return 0;
}