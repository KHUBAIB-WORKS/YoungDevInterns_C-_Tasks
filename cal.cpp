#include <iostream>
using namespace std;
int main()
{

    cout << "  Calculator " << endl;
    cout << " Select an operation " << endl;
    cout << "+" << endl;
    cout << "-" << endl;
    cout << "*" << endl;
    cout << "%" << endl;

    int userinput;
    int input1;
    int input2;
    cin >> userinput;

    switch (userinput)
    {

    case +:
        cout << "Enter first value " << endl;
        cin >> input1;
        cout << "Enter second value " << endl;
        cin >> input2;
        int c = input1 + input2;
        cout << "Solution =" << c << endl;
        break;

    case -:
        cout << "Enter first value " << endl;
        cin >> input1;
        cout << "Enter second value " << endl;
        cin >> input2;
        int c = input1 - input2;
        cout << "Solution =" << c << endl;
        break;
    case *:
        cout << "Enter first value " << endl;
        cin >> input1;
        cout << "Enter second value " << endl;
        cin >> input2;
        int c = input1 * input2;
        cout << "Solution =" << c << endl;
        break;
    case %:
        cout << "Enter first value " << endl;
        cin >> input1;
        cout << "Enter second value " << endl;
        cin >> input2;

        if (input1 > 0 && input2 > 0)
        {
            if (input2 != 0)
            {
                cout << "Solution = " << input1 % input2 << endl;
            }
            else
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
        }
        else
        {
            cout << "Error: Both values must be positive integers." << endl;
        }
        break;

    default:
        cout << "Error: Invalid operation selected." << endl;
        break;
    }
    return 0;
}
