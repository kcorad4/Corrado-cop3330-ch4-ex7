
//COP 3330 KYLE CORRADO

# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
    char operation;
    double number_1, number_2;
   
    cout << "Enter First Number :\n";   //input 1st num in variable number_1
    cin >> number_1;
    
    cout << "Enter Second Number:\n";   //input 2nd num in variable number_2
    cin >> number_2;

    cout << "Enter operator among + , - , * , / :\n";   //input operator
    cin >> operation;

    switch(operation)
    {
        case '+':                                                         
        cout <<"\nThe sum of "<<number_1<<" and "<<number_2<<" is "<< number_1+number_2;
        break;

        case '-':
        cout <<"\nThe difference of "<<number_1<<" and "<<number_2<<" is "<< number_1-number_2;
        break;

        case '*':    //setprecision used for rounding decimal number
        cout <<"\nThe multiplication of "<<number_1<<" and " <<number_2<< " is " <<setprecision(2)<< fixed << number_1*number_2;
        break;

        case '/':
        cout <<"\nThe division of "<<number_1<<" and "<<number_2<<" is "<<setprecision (2) << fixed << number_1/number_2;
        break;

        default:
        cout << "\nError! Please Enter valid operator"; //error if other operator entered
        break;
    }
}
