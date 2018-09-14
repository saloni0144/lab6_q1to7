/* Q.4(b) Goal is the same as the previous this time for minimum.
*/

//include library
#include <iostream>
using namespace std;

	//Functions with parameters and reference parameter.
	void funcR(int a, int b, int &c){
    	if (a<b)
    	{	
        c = a;
    	}
    	else {
        c = b;
		}
	}

//Driver function
int main(){
	//Declaring variables     
	int p,q,min;
		//Ask the terminal for two numbers.
    	cout << "Give the two numbers to get the lesser of them " ;
    	cin>>p>>q;
    	//call the arguments
    	funcR(p,q,min);
		//Print the minimum
   	 	cout<<"The minimum of the two numbers " <<p <<" and " <<q <<" is " <<min <<endl;
    	

return 0;
} 


