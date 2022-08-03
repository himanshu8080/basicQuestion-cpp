#include<iostream>
using namespace std;

void findindex(int arr[],int n,int key){
	int start=-1;
	for (int i=0;i<n;i++){
		if (arr[i]==key){
			start=i;
			break;
		}
	}
		if (start==-1){
			cout<<"key not present in an array";
			return ;
		}
		int end=start;
		for (int i=n-1;i>=start;i--){
			if(arr[i]==key){
				end=i;
				break;
			}
		}
		if (start==end){
			cout <<"only one key is present in an array "<<start;
		}
		else{
			cout <<"start index:"<<start<<endl;
			cout <<"end index:"<<end;
	}
	}


int main(){
int arr[]={1,2,3,3,3,4,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
int key=3;
findindex(arr,n,key);
return 0;

}
