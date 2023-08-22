//calculator using switch
#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    char op;
    cout << "ENter the oprator you want you result" << endl;
    cin >> op;
    cout<<"your result "<<endl;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;

    default:cout<<"it is defalt case";
        break;
    }
}