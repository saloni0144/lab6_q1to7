/*Q.2(a) [Value] Write a program with a function that takes two int parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the functions as arguments, and tell the user the sum.*/



//Include the library
#include<iostream>
using namespace std;

	//Write a function that has two parameters.
	int func(int a, int b){
		//Give their sum.
		int sum = a + b;
		return sum;
	}

//Driver function
int main(){
	//Declare variables
	int c,d;
		//Ask the user for two numbers.
		cout<< "Give two numbers be ";
		cin >>c >>d;
		//Tell user the sum
		cout<<"The sum of the numbers "<<c<< " and " <<d<<" is "<< 
		//Call function for numbers as arguments
        func(c,d) <<endl;
		
return 0;
}
