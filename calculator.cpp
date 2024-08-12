#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    char ch; // Changed from int to char for operator input

    // Input numbers
    cout << "Enter the numbers: ";
    cin >> n1 >> n2;

    // Input operator
    cout << "Enter operator (+, -, *, /): ";
    cin >> ch;

    // Perform operation based on operator
    switch(ch){
        case '+':
            cout << n1 + n2;
            break;
        case '-':
            cout << n1 - n2;
            break;
        case '*':
            cout << n1 * n2;
            break;
        case '/':
            if (n2 != 0)
                cout << n1 / n2;
            else
                cout << "Error: Division by zero!";
            break;
        default:
            cout << "Invalid operator!";
            break;
    }

    return 0;
}
