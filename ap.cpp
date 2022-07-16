#include<iostream>
using namespace std;

int main(){
    int n,s,d;
    
    cout<<"Enter no of elements for the array"<<"  -"<<" ";
    cin>>n ;
    
    cout<<"Enter the starting point for AP - "<<" ";\
    cin>>s;
    
    cout<< "Enter the difference for AP - "<< " ";
    cin>>d;
    
    int arr[n];
    
    for (int i = 0; i < n; i++){
        arr[i]=s;
        s=s+d;

    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
      
    }
    



    return 0;
    

}
