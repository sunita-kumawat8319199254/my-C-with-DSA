// reverse arry element
#include<iostream>
using namespace std;
void reverse(int num[],int n){
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        swap(num[start],num[end]);
        start++;
        end--;
    }
    
}
void printarry(int arr[],int n)
{
  for (int  i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main()
{
    int num[6]={1,2,3,4,5,6};
    int arr[5]={2,3,4,5,6};
    reverse(num,6);
    reverse(arr,5);
    printarry(num,6);
    printarry(arr,5);
}