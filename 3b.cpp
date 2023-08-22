// using if-else print positive or negitive

/*#include<iostream>
using namespace std;

int main()
{

int n;
cout<<"Enter a number "<<endl;
cin>>n;

if (n>0)
{
     cout<<"it is positive"<<endl;
}


else
{
    cout<<"it is negetive"<<endl;
}
}*/

// using if-else-if nested  print positive or negitive and o

/*#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number " << endl;
    cin >> n;

    if (n > 0)
    {
        cout << "it is positive" << endl;
    }

    
        if (n < 0)
        {

            cout << "it is negetive" << endl;
        }
        
        if(n==0)
        {
            cout << "it is 0" << endl;
        }
    
}*/


#include<iostream>
using namespace std;

int main()
{

int a,b;
cout<<"Enter number a and b"<<endl;
cin>>a>>b;
cout<<"your input is "<<a <<" "<< b<<endl;


if (a>b)
{
     cout<<"a is greter"<<endl;
       cout<<"b is smaller"<<endl;
}


else
{
    
    cout<<"b is gretar"<<endl;
      cout<<"a is smaller"<<endl;
}

}
