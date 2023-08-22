//arry with function
#include <iostream>
using namespace std;
void printarry(int arr[],int size)
{
    cout<<"print the array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<"printing done"<<endl;
}
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
    
    printarry(second,15);
    
    
    char ch[5]={'a','b','c','d','e'};
    cout<<ch[2]<<endl;
    

}

// print size of array
#include<iostream>
using namespace std;
int main()
{
    int arry[16];
    int sizeofarry=sizeof(arry)/sizeof(int);
    cout<<"size of arry is"<<endl<<sizeofarry;

    
}