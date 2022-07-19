#include<iostream>
using namespace std;

float round (float var){
    float value=(int)(var*100+.5);
    return (float)value/100;
}
int main(){
    float var=37.63214;
    cout<<round(var);
    return 0;
}
