#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 10
bool checker(vector<int>arr,int n){
    // sort(arr.begin(),arr.end());
    
    for(int i=1;i<n-1;i++){
        if((arr[i]-arr[i-1])==(arr[i+1]-arr[i])){
           cout<<arr[i] <<" "<<arr[i-1] <<" "<<arr[i+1] <<" "<<arr[i]<<endl;
            continue;
        }
        else{
            return false;
        }
      
    }
      return true;
}
int main()
{
   
    int n=3;
    int mat[3][MAX_SIZE]  = {{10,7, 2},
                            {6, 5, 1},
                            {2, 3, 3}};

    vector<int>ans;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
            ans.push_back(mat[j][i]);
            
        }
        
        if(checker(ans,n)==true){
            ans.clear();
            continue;
        }
        else{
            cout<<"false";
            return 0;

        }
        
    }
    cout<<"true";
    return 0;
}
