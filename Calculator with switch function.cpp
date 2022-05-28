#include <iostream>
using namespace std;

//function for addition
int add(int a, int b)
{
	return (a+b);
	cout<<"The Result of Addition is= ";
}

//function for subtraction
int subt(int a, int b)
{
	return (a-b);
	cout<<"The Result of Subtraction is= ";
}

//function for multiplication
int mult(int a, int b)
{
	return (a*b);
	cout<<"The Result of Multiplication is= ";
}

//function for division
int div(int a, int b)
{
	return (a/b);
	cout<<"The Result of Division is= ";
}


int main()
{
	//declaring variables
	int oper;
	float n1, n2, n3;

	cout<<"Please enter the firt number: ";
	cin>>n1;
	cout<<'\n'<<'\n';

	cout<<"Please enter the second number: ";
	cin>>n2;
	cout<<'\n'<<'\n';
	
	cout<<"Please choose operator from the given options: "<<'\n';
	cout<<"1: Addition (+)"<<'\n'<<"2: Subtraction (-)"<<'\n';
	cout<<"3: Multiplication (X)"<<'\n'<<"4: Division (/)"<<'\n';
	cout<<"The operator= ";
	cin>>oper;
	cout<<'\n'<<'\n';

    switch (oper) {
        case '1':
       		 n3=add(n1, n2);
       		 cout<<n3;
            break;
        case '2':
        	 n3=subt(n1, n2);
             cout<<n3;
			break;
        case '3':
           n3=mult(n1, n2);
             cout<<n3;
			break;
        case '4':
           n3=div(n1, n2);
             cout<<n3;
			break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not from the given list";
            break;
    }

}
