//Include the library
#include<iostream>
using namespace std;

	//Write a function that has two parameters and a reference.
	int func(int a, int b, int&c){
		if(c==1){
		//Give their sum.
		int sum = a + b;
		return sum;
		}
		if(c==2){
		//Give maximum.
		if(a>b){
		return a;
		}
		else {
		return b;}
		}
 		if(c==3){
		//Give minimum.
		if (a<b){
		return a;
		}
		else {
		return b;}
		}
	}

//Driver function
int main(){
	//Declare variables
	int x,y,operation;
		//Ask the user for two numbers.
		cout<< "Let the two numbers be ";
		cin >>x >>y;
		//Ask the user for the operation of choice
        cout<<"Which operation do you want to perform?"<<endl
		<<"For sum type 1"<<endl
		<<"For maximum between two numbers type 2" <<endl
		<<"For minimum between two numbers type 3"<<endl;
		cin>>operation;

		//Tell user the desired value
		cout<<"The value of opertation choosen on the numbers " 		<<x<< " and " <<y<<" is "<< 
		//Call function for numbers as arguments
        func(x,y,operation) <<endl;
		
return 0;
}
