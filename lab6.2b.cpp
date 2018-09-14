/*
 Q.2 (b) [Reference] Goal is the same as previous, but this time, the function that adds the numbers should be void, takes the third, passby the third reference parameter; then puts the sum in it.
*/


//Include the Library
#include<iostream>
using namespace std;

	//Functions with parameters and reference parameter.
	void funcR(int a, int b ,int &c){
		//Giving the sum
		c=a+b;
	}

//Driver function
int main(){
	//Declare the variables.	
	int p,q,sum;
		//Ask the user for two numbers.
		cout<< "The two numbers to give the sum: ";
		cin>>p>>q;
		//Call the arguments.
		funcR(p,q,sum);
		//Print the sum.
		cout<<"The sum of the numbers "<<p<< " and " << q <<" is "<<  sum <<endl;
	
       
return 0;
}
