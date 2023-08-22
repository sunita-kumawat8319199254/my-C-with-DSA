// print fibonachiseries  print nth turm ;
#include <iostream>
using namespace std;
void fibonacci(int a)
{
    int first = 0;
    int second = 1;
    int nextnumber = 0;
    for (int i = 3; i <= a; i++)
    {
        nextnumber = first + second;

        first = second;
        second = nextnumber;
    }
    cout << a << "th turm in fibonacci series  is " << nextnumber << endl;
}
int main()
{
    int n;
    cin >> n;

    fibonacci(n);
}