	// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    int arr[10]={1,2,3,4,5};
    
    int pos,num,i;
    
    cin>>pos>>num;
    for(int i=5;i>=pos;i--)
        arr[i]=arr[i-1];       //arr[i+1]=arr[i];
    arr[pos]=num;
    
     for (int i=0;i<6;i=i+1){
         cout<<arr[i];
     }
    
    
    return 0;
}
