#include <bits/stdc++.h>
using namespace std;

int swapNumber(int arr[],int n,int k){
    swap(arr[k-1],arr[n-k]);
}
int main() {
    int n;
    cout<<"enter the no. of array element";
    cin>>n;
    
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
     int k;
    cout <<"enter the index no which we want to swap";
    cin>>k;
    
    swapNumber(arr,n,k);
    
    for (int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}
