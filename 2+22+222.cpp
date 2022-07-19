//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int checker(int n,int d){
//	
//	int val=d;
//	int sum=0;
//	
//	for(int i=0;i<n;i++){
//		val=d*pow(10,i)+val;
//		sum+=val;
//		
//	}
//	return sum;
//}
//
//int main(){
//	
//	int n;
//	cin>>n;
//	cout <<"enter the no of terms"<<endl;
//	
//	int d;
//	cin>>d;
//	cout<<"enter the digit "<<endl;
//	
//	cout<<checker(n,d);
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int checker(int n,int d){
        int x=d;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum = sum +d ;
            d=(d*10)+x;
        }
    
    
        return sum;
}
int main(){

        int n;
        cin>>n;
        int d;
        cin>>d;
        cout<<checker(n,d);


}
