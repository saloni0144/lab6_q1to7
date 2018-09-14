/* 
Q.3(b)[Reference] Goal is the same as previous, but this time, the function that find s the maximum of the numbers should be void, and takes the third, pass by the third reference parameter; then puts the maximum in it.
*/
 

//Include the Library
#include<iostream>
using namespace std;

	//Functions with parameters and reference parameter.
	void funcR(int a, int b ,int &c){
		if(a>b){
		c = a;
		}
		else {
		c = b;
		}
	}

//Driver function
int main(){
	//Declare the variables.	
	int p,q,max;
		//Ask the user for two numbers.
		cout<< "The two numbers to give the bigger of the two: ";
		cin>>p>>q;
		//Call the arguments.
		funcR(p,q,max);
		//Print the maximum.
		cout<<"The maximum among the numbers "<<p<< " and " << q <<" is "<< max <<endl;
		

return 0;
}
