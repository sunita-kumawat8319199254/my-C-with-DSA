//print counting
#include <iostream>
using namespace std;
int counting(int n)
{

    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << count << " ";
        count++;
    }
    return count;
}
int main()
{
    int n;
    cout << "ENTER THE VALUE OF n" << endl;
    cin >> n;
    // function calls
    counting(n);
}