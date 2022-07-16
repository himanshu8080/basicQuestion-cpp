#include<iostream>
#include<cmath>
using namespace std;
     



int main()
{
    int n;
    float arr[n];
      cout<<"Enter size of array : ";
      cin >>n;
     cout<<"enter the float elements : ";
     for( int i=0;i<n;i++){
        cin>>arr[i];
        }
        cout<<"Ceil :";
        for (int  i = 0; i < n; i++)
        {
           cout<<ceil(arr[i])<<" ";
        }

        cout<<"Floor :";
        for (int  i = 0; i < n; i++)
        {
           cout<<floor(arr[i])<<" ";
        }

        
return 0;
}
