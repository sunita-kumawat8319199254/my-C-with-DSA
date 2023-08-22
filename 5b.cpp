/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<" print count from 1to n"<<endl;
    for (int i = 1; i<=n; i++)
    {
       cout<<i<<endl;
  }

    for (int a=0,b=1,c=2;a>>0 && b>>1 &&c>>2; a--,b--,c--)
    {
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    }
}*/

// n number of sum
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int sum=0;
    for (int i = 1; i <=n; i++)
    {
    sum=sum+i;
    }
    cout <<sum<<endl;
}*/

// fibonacci series

/*#include<iostream>
using namespace std;
int main()
{
    int n= 10;
    int a= 0;
    int b= 1;
    cout <<a<<" "<< b<<" ";
    for (int i = 1; i <=n; i++)
    {
        int nextnumber = a+b;
        cout << nextnumber <<" ";
        a = b;
        b = nextnumber;
    }


}*/

// prime number
/*#include<iostream>
using namespace std;
int main()
{
   int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for (int i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            cout <<"it is not  prime for"<<endl;
            break;
        }
        else
        {
            cout<<" it is prime "<<endl;
        }

}*/


#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
     cout<<"hello"<<endl;
     cout<<" hyy"<<endl;
     continue;
     cout<<" bhai bol to le"<<endl;
    }
    
}