// taking input and give sum of input
// i/p= 1,2 ,3,4;
// i/o=1+2+3+4;
#include <iostream>
using namespace std;
int sum(int num[], int size)
{
    int sum = 0;
    cout << "enter the number" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
        sum = sum + num[i];
    }
    cout << "the sum is" << endl<< sum;
    return sum;
}
int main()
{
    int size;
    cout << " enter the size" << endl;
    cin >> size;
    int num[100];
    sum(num, size);
}