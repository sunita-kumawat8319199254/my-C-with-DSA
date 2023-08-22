// 5 question
// 1
/*#include<iostream>
using namespace std;
int main()
{

int a,b =1;
a=10;
if(++a)
{
cout<<b;
}

else
{
    cout<<++b;
}

}*/

// 2
/*#include<iostream>
using namespace std;
int main()
{
 int a=1;
 int b=2;
 if(a-->0 || ++b>2)
 {
   cout<<"stage1-inside if";
 }
 else
 {
    cout<<"stage12-inside else";
 }
 cout<< a<<" "<<b<<endl;

}*/
// 3
/*#include<iostream>
using namespace std;
int main()
{
    int number=3;
    cout<<(25 *(++number));

}*/

// 4
/*#include<iostream>
using namespace std;
int main()
{
    int a=1;
 int b=2;
 if(a-->0 && ++b>2)
 {
   cout<<"stage1-inside if";
 }
 else
 {
    cout<<"stage12-inside else";
 }
 cout<< a<<" "<<b<<endl;

}*/
// 5
/*#include<iostream>
using namespace std;
int main()
{
 int a=1;
 int b=a++;
 int c=++a;
 cout<<b;
 cout<<c;
}*/

// 6
/*#include<iostream>
using namespace std;
int main()
{
   for (int i = 0; i <=5; i--)
{
    cout<<i<<" ";
    i++;
}

}*/

// 7
/*#include<iostream>
using namespace std;
int main()
{
   for (int i = 0; i <=15; i+=2)
{
    cout<<i<<" ";
    if (i&1)
    {
        continue;
    }
    i++;
}

}*/
// 8

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {

            cout << i << " " << j << endl;
        }
    }
}

