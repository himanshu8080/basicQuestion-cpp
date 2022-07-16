#include<iostream>
using namespace std;

int main(){
    int number,rem,rn=0;
    
    cout<<"enter no. to reverse"<<endl;
    cin>>number;
    
    while(number!=0){
        
        rem=number%10;
        number=number/10;
        rn=(rn*10)+rem;
        
    }
    cout <<"reverse number is "<<rn<<endl;
    
    return 0;
    
    
}
