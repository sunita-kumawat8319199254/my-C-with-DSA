#include <iostream>
using namespace std;
int main()
{
    //declaer array
    int arr[15];;

    cout<<"value at 0 index is  "<<arr[0]<<endl;
    //intiallization of array
    int first[5]={1,3,4,5,7};
    cout<<" value at 3 index is  "<<first[3]<<endl;

    //access an element
    int second[15]={2,3,4};
    int n=15;
    for (int  i = 0; i < n; i++)
    {
        cout<<second[i]<<" ";
    }
    
    
    char ch[5]={'a','b','c','d','e'};
    cout<<ch[2]<<endl;
    

}