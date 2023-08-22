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
char ch = 'A'+i-1;
    while (j<=i)
    {


      cout <<ch<<" ";
       ch=ch+1;
      
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}*/

//abcd in tringel
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

    while (j<=i)
    {

char ch='A'+i-1;
      cout <<ch<<" ";
       ch=ch+1;
      
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}*/


//reverse abcd in tringulaer pattern

#include <iostream>
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
    char ch='A'+n-i;
    while (j<=i)
    {
      
      cout <<ch<<" ";
       ch=ch+1;
      
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}