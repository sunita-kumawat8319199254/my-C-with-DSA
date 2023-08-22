//linear search
#include<iostream>
using namespace std;
bool linearsearch(int num[],int n,int key)
{
    for (int i = 0; i <n; i++)
    {
        if (num[i]==key)
        {
           return 1;
        }
        
    }
    return 0;
}
int main()
{
    int num[10]={1,4,3,4,8,7,10,18,12,16};
    cout <<"enter the value of key"<<endl;
    int key;
    cin>>key;
    if(linearsearch(num,10,key))
    {
        cout<<"yes present"<<endl;
    }
    else
    {
        cout<<"not present"<<endl;
    }
    

}