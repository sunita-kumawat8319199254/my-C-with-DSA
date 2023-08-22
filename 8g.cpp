// nCr  formula use find nCr=n!/r!(n-r)!

#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int numretor = factorial(n);
    int dinometer = factorial(r) * factorial(n - r);
    int ans = numretor / dinometer;
    return ans;
}

int main()
{
    int n, r;
    cout << "enter value of n" << endl;
    cin >> n;
    cout << "enter value of r" << endl;
    cin >> r;
    int ans = nCr(n, r);
    cout << "the result is " << ans << endl;
}