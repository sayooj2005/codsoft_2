//SIMPLE CALCULATOR
#include <iostream>
using namespace std;
int main()
{
    double n1,n2; //for storing numbers
    char op;//for storing the operator


    //get two numbers from user
    cout<<"Enter first number= "<<endl;
    cin>>n1;
    cout<<"Enter second number= "<<endl;
    cin>>n2;


    //get operator from user
    cout<<"Enter an operator( + - * / )= "<<endl;
    cin>>op;



    double res;// for storing the result

    switch(op)
    {
    case '+':
        res=n1+n2;
        cout<<n1<<op<<n2<<"="<<res<<endl;
        break;
    case '-':
        res=n1-n2;
        cout<<n1<<op<<n2<<"="<<res<<endl;
        break;
    case '*':
        res=n1*n2;
        cout<<n1<<op<<n2<<"="<<res<<endl;
        break;
    case '/':
        if(n2==0.0)
        {
            cout<<"Division by zero not possible"<<endl;
        }
        else
        {
            res=n1/n2;
            cout<<n1<<op<<n2<<"="<<res<<endl;
        }
        break;
    default:
        cout<<"Invalid Operator"<<endl;
    }


}



