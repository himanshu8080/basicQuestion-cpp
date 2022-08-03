//#include <iostream>
//using namespace std;
//
//class human{
//	public:
//		bool hair;
//		string hair_c;
//		
//		void walk(int);	
//};
//
//void human::walk(int steps){
//	cout<<"i can walk"<<" "<<steps<<" "<<"meter"<<endl;
//}
//
//int main (){
//	human obj;
//	human vasu;
//	obj.hair=false;
//	obj.hair_c="Invalid";
//
//	vasu.hair=true;
//	vasu.hair_c="Yellow";
//	
////	cout <<obj.hair<<" "<<obj.hair_c<<endl;
////	cout <<vasu.hair<<" "<<vasu.hair_c;
////	
//obj.walk(1200);
//
//	
//
//	for(
//	)
//	
//	return 0;
//	}
//	
//	
#include<iostream>
using namespace std;
class human{              //class
    public:              //specifier
        bool hair;       //Attributes
        string hair_c;
       

        void walk(int steps);


        human(string name){
            cout<<"Welcome here"<<name<<endl;
        }
};

void human::walk(int steps){
   
    cout<<" can walk "<<steps<<" steps"<<endl;
}
int main(){
//  human obj;
//  human obj2;
 human amjad("amjad");
//  human vasu("vasu");
 amjad.hair=true;
 amjad.hair_c="Green";
//  vasu.hair=false;
//  vasu.hair_c="Invalid";

//  vasu.walk(78);
 amjad.walk(90);


 cout<<amjad.hair<<" "<<amjad.hair_c<<endl;
//  cout<<boolalpha<<vasu.hair<<" "<<vasu.hair_c;
return 0;
}








