//scope in arry
#include<iostream>
using namespace std;
void scopearry(int arry[],int n)
{
    arry[0]=13;
    cout<<"inside the function"<<endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout<<arry[i]<<" ";
    }
    cout<<endl;
    cout<<"outside the function"<<endl;
    

}
int main()
{
    int arry[3]={1,2,3};
    scopearry(arry,3);
    for (int i = 0; i < 3; i++)
    {
        cout<<arry[i]<<" ";
    }
    
}