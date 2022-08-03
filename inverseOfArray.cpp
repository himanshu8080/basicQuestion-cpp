// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    
    int arr[num];
    for (int i=0;i<num;i++){
        cin>>arr[i];
    }
    
    int temp[num];
    for (int i=0;i<num;i++){
        temp[arr[i]]=i;
    }
    
    for (int i=0;i<num;i++){
        cout <<temp[i];
    }
   
    return 0;
}
