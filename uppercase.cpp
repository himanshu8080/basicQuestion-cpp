#include<bits/stdc++.h>
using namespace std;

void checker(string s){
    
    int n=s.size();
    for(int i=0;i<n;i++){
        if(i==0){
            s[i]=toupper(s[i]);
        }
            if (s[i]==' '){
            s[i-1]=toupper(s[i-1]);
            s[i+1]=toupper(s[i+1]);
            }
            if(i==n-1){
            s[i]=toupper(s[i]);
        }
    }
    cout <<s;
    
}

int main(){

    string s="hello world";
    checker(s);
}

