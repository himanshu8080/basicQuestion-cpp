 #include<iostream>
 using namespace std;
 class solution{
     public:
     bool IsPerfect(int a[],int n){
 
        for(int i = 0; i < n/2; i++){
            if(a[i] = a[n -i -1]) return true;
        }
        
        return false;
 }
 };
 int main (){
     int t ;
     cin>>t;
     while (t--){
         int n ;
         cin>>n;
         int a[n];
         
         for (int i=0;i<n;i++)
         cin>>a[i];
         solution ob;
         if(ob.IsPerfect(a,n))
         cout<<"perfect\n";
         else
         cout<<"not perfect\n";
         
         
         
     }
 }
