// find maximum and minimum value
#include <iostream>
#include <limits.h>
using namespace std;
int getmax(int num[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        
    }
    return max;
}
int getmin(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
        
    }
    return min;
}
int main()
{
    int size;
    cout << "enter the value of size" << endl;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {

        cin >> num[i];
    }
    cout << "maximum value  is   " << getmax(num, size) << endl;
    cout << " Minimum  value is   " << getmin(num, size) << endl;
}