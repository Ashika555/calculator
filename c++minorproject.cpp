#include <iostream>

using namespace std;

int main()
{
    int op;
    double num1,num2;
    cout<<"**Menu**\nPlease select your operation to be implemented:\nEnter:\n";
    cout<<"1 for Addition\n2 for Subtraction\n3 for Multilication\n4 for Division\n";
    cin>>op;
    cout<<"Enter 2 numbers to implement this operation:";
    cin>>num1>>num2;
    switch(op)
    {
        case 1:cout<<"You have selected Addition operation.\n Result="<<num1+num2;break;
        case 2:cout<<"You have selected Subtraction operation.\n Result="<<num1-num2;break;
        case 3:cout<<"You have selected Multiplication operation.\n Result="<<num1*num2;break;
        case 4:cout<<"You have selected Division operation.\n Result="<<num1/num2;break;
        default: cout<<"Invalid input.";
    }

    return 0;
}
