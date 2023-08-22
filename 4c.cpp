//number pattern print trengular
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  cout<<"your input is"<<n<<endl;
  int i=1;
  while (i<=n)
  {
    int j=1;
    while (j<=i)
    {
        cout<<i<<" ";
        j=j+1;
    }
     cout<<endl;
     i=i+1;
  }
  

}

//counting number tringular pattern

/*#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  cout<<"your input is"<<n<<endl;
  int i=1;

  while (i<=n)
  {
    int j=1;
   int  count=1;
    while (j<=i)
    {
        cout<<count<<" ";
        count=count+1;
        j=j+1;
    }
     cout<<endl;
     i=i+1;
  }
  

}*/

//new pattern

/*#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  cout<<"your input is"<<n<<endl;
  int i=1;

  while (i<=n)
  {
    int j=1;
   int  value=i;
    while (j<=i)
    {
        cout<<value<<" ";
       value=value+1;
        j=j+1;
    }
     cout<<endl;
     i=i+1;
  }
  

}*/
