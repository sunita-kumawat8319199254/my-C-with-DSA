// print normal aaa,bbb

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
    char ch ='A'+i-1;

    while (j<=n)
    {
        cout<<ch<<" ";

        j=j+1;
    }
     cout<<endl;
     i=i+1;
  }

}

// print abc

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

    while (j<=n)
    {
      char ch='A'+j-1;
        cout<<ch;
       j=j+1;
    }
     cout<<endl;
     i=i+1;
  }

}*/

// abcd alternatet

/*#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the value of n" << endl;
  cin >> n;
  cout << "your input is" << n << endl;
  int i = 1;
  char ch = 'A';
  while (i <= n)

  {
    int j=1;

    while (j<=n)
    {


      cout <<ch<<" ";
       ch=ch+1;
      
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}*/

/*#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the value of n" << endl;
  cin >> n;
  cout << "your input is" << n << endl;
  int i = 1;
  
  while (i <= n)

  {
    int j=1;
char ch = 'A'+i+j-2;
    while (j<=n)
    {


      cout <<ch<<" ";
       ch=ch+1;
      
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}*/


/*#include<iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the value of n" << endl;
  cin >> n;
  cout << "your input is" << n << endl;
  int i = 1;
  
  while (i <= n)

  {
    int j=1;
char ch = 'A'+i+j-2;
    while (j<=n)
    {


      cout <<ch<<" ";
       ch=ch+1;
      
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}*/