//switch case
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    cout << "Enter the value of n and ch" << endl;
    cin >> n >> ch;
    switch (n)
    {
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    case 4:
        cout << "four" << endl;
        break;
    case 5:
        cout << "five" << endl;
        break;

    default:
        cout << "it s default";
        break;
    }
    switch (ch)
    {
    case 'A':
        cout << "apple" << endl;
        break;
    case 'B':
        cout << "boll" << endl;
        break;
    case 'C':
        cout << "cat" << endl;
        break;
    case 'D':
        cout << "dog" << endl;
        break;
    case 'E':
        cout << "elephant" << endl;
        break;

    default:
        cout << "it s default";
        break;
    }
}*/


//NESTED SWITCH
#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    cout << "Enter the value of n and ch" << endl;
    cin >> n >> ch;
    switch (n)
    {
    case 1:
        cout << "one" << endl;
        switch (ch)
        {
        case 'B':cout<<"boy"; 
        
        default:
            break;
        }
        default:
        break;
    }
}