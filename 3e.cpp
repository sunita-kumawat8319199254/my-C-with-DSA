/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE VALUE OF n"<<endl;
    cin>>n;

     int i=1;

    while (i<=n)
    {
        cout<<i<<" ";
        i=i+1;
    }

}*/
// sum of n number

/*#include<iostream>
using namespace std;
int main()
{

int n;
 cout<<"ENTER THE VALUE OF n"<<endl;
    cin>>n;

    int i=1;
    int sum=0;


    while (i<=n)
    {
        sum = sum+i;
        i=i+1;
    }

    cout<<"the sum is  "  <<   sum  <<endl;
}*/

// sum of even number
/*#include<iostream>
using namespace std;
int main()
{

int n;
 cout<<"ENTER THE VALUE OF n"<<endl;
    cin>>n;

    int i=2;
    int sum=0;


    while (i<=n)
    {
        sum = sum+i;
        i=i+2;
    }

    cout<<"the sum is  "  <<   sum  <<endl;
}*/

// sum of odd number

/*#include<iostream>
using namespace std;
int main()
{

int n;
 cout<<"ENTER THE VALUE OF n"<<endl;
    cin>>n;

    int i=1;
    int sum=0;


    while (i<=n)
    {
        sum = sum+i;
        i=i+2;
    }

    cout<<"the sum is  "  <<   sum  <<endl;
}*/

// print prime and not prime
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a value of n" << endl;
    cin >> n;

    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "the numer is not prime for "<<i << endl;
        }
        else
        {
            cout << "the number is prime for " <<i<< endl;
        }
        i = i + 1;
    }
}


 