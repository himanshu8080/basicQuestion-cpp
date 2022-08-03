// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    int count =0;
    int rem=0;
    
    int temp=n;
    while (n>0){
         n=n/10;
         count++;
         
    }
   int sum=0;
   while (temp>0){
       rem=temp%10;
       sum+=pow(rem,count);
       temp=temp/10;
   }
   
   cout <<sum;
    return 0;
}
