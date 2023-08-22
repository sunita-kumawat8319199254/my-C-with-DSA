#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "put  character" << endl;
    cin >> ch;

    if (ch>='a'&&ch<='z')
    {
        cout << "THIS IS LOWER CASE" << endl;
    }
    else if (ch>='0'&&ch<='9')
    {
        cout << "THIS IS NUMERIC" << endl;
    }
    else if(ch>='A'&&ch<='Z')
    {
        cout << "THIS IS UPPER CASE" << endl;
    }
}