#include <iostream>
using namespace std;
int main(){
	
	// program starts here
	
	char op;
	float num1 , num2;
	
	cout<<"Enter operator: + ,- ,* , /:";
	cin>>op;
	
	cout<<"Enter two operands: " ;
	cin>>num1 >> num2 ;
	
	switch(op){
		
		case '+':
			cout<< num1 << " + " << num2 << " = " <<num1 + num2;
			break;
			
		
		case '-':
			cout<< num1 << " - " << num2 << " = " <<num1 - num2;
			break;
			
		
		case '*':
		cout<< num1 << " * " << num2 << " = " <<num1 * num2;
		break;
		
		case '/':
		cout<< num1 << " / " << num2 << " = " <<num1 /num2;
		break;
		
		default:
		// if the operator is another than +, -, *, or /, error meesage is shown 
		cout<<" Error! operator is not correct";
		break;	
		
	}
	
		return 0;
}


