#include<iostream>
using namespace std;
void calculator(){
	double num1,num2;
	char operation;
	
	cout<<"simple calculator"<<endl;
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter operation(+, -, *, /); ";
	cin>>operation;
	cout<<"Enter second number: ";
	cin>>num2;
	
	switch(operation){
		case'+':
			cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
			break;
		case'-':
			cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
			break;
		case'*':
			cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
			break;
		case'/':
			if(num2 !=0)
			cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
		else
		cout<<"error:division by 0 is not allowed"<<endl;
		break;
		default:
			cout<<"invalid operation"<<endl;			
			
	}
}
int main(){
	char again;
	do{
		calculator();
		cout<<"do you want to calculate again?(y/n): ";
		cin>>again;
	}
	while(again=='y'||again=='Y');
	return 0;
}
