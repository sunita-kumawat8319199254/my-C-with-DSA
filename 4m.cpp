// dubung ka bap

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // first tringuler
        int j = n - i + 1;
        int count = 1;
        while (j)
        {
            cout << count << " ";
            count = count + 1;
            j = j - 1;
        }
        // first star

        int p = n + i - 6;

        while (p)
        {
            cout << "*"<< " ";
            p = p - 1;
        }

        // second star

        int s = n + i - 6;

        while (s)
        {
            cout << "*"<< " ";
            s = s - 1;
        }

        // fourth trangulaer

        int r = n - i + 1;
        while (r >= 1)
        {
            cout << r << " ";
            r = r - 1;
        }

        cout << endl;
        i = i + 1;
    }
}