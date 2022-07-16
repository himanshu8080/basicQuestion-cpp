#include<iostream>
using namespace std;
int main()
{
  int n1,n2,i,j;
  cout<<"enter the no. of element in arr1"<<endl;
  cin>>n1;
  
    int arr1[n1];
    
  cout<<"enter the elements of arr1"<<endl;
  for(i=0;i<n1;i++){
  
  cin >>arr1[i];
}

  
  
   cout<<"enter the no. of element in arr2"<<endl;
  cin>>n2;
  
    int arr2[n2];
    
  cout<<"enter the elements of arr2"<<endl;
  for(i=0;i<n2;i++){
  
  cin >>arr2[i];
}


cout<<"the intersection of the 2 arrrys(arr1 and arr2) is "<<endl;
for(i=0;i<n1;i++){
	for(j=0;j<n2;j++){
		if(arr1[i]==arr2[j]){
		cout <<arr1[i]<<" ";
	}
	
}
}
  return 0;
}
