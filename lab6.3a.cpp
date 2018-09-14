/* 
Q.3(a) [Value] Write a program witha function that takes two int parameters, find the maximum, then returns the maximum. THe program should ask the user for 2 numbers, then call the function with the numbers as arguments, and tell the user.
*/

//Include the library
#include<iostream>
using namespace std;

	//Write a function that has two parameters.
	int func(int a, int b){
		if(a>b){
		return a;}
		else {
		return b;}
	}

//Driver function
int main(){
	//Declare variables
	int c,d;
		//Ask the user for two numbers.
		cout<< "Let the two numbers be ";
		cin >>c >>d;
		//Tell user the bigger number.
		cout<<"The larger of the two numbers "<<c<< " and " <<d<<" is "<< 
		//Call function for numbers as arguments
        func(c,d) <<endl;
		
return 0;
}
