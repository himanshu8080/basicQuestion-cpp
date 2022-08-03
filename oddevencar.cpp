#include <iostream>
using namespace std;
int main() {
	
    int num;
    cin>>num;
    
    
    
   int rem =0;
   int evenS=0;
   int oddS=0;
   while (num>0){
       rem=num%10;
       if(rem%2==0){
            evenS+=rem;
       }
       else{
           oddS+=rem;
       }
       num=num/10;
   }
   if (evenS%4==0 || oddS%3==0){
       cout <<"Yes";
   }
   else{
       cout <<"No";
   }
   
   
   
    return 0;
}
