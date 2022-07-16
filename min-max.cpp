#include<bits/stdc++.h>

using namespace std;

int main() {
    // Write C++ code here
    cout<<"enter the number of element"<<endl;
    int n;
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
   
    int min=1,max=1;
   
    for(int i=0;i<=1;i++){
        min=min*arr[i];
    }
    for(int i=n-1;i>=n-2;i--){
        max=max*arr[i];
    }
   
    cout<<"maximum product is "<<max<<endl;
    cout<<"minimum produnct is "<<min<<endl;

    return 0;
}

