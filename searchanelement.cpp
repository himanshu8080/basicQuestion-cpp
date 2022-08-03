// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;

int func(int arr[] ,int n ,int k)
{
	 for(int i=0;i<n;i++){
         if(arr[i]==k){
         return 2;
		}
     }
       return -1;
     
}

int main() 
{ 
    
   
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int k;
        cin>>k;
          
          cout<<func(arr, n , k );
    
     

//	return 0; 
} 
  // } Driver Code Ends
