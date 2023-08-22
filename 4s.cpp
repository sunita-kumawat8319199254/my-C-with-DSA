

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
    
    int j=n-i+1;
    
    while (j)
    {
        cout<<"*"<<" ";
        j=j-1;
    }
    

     cout<<endl;
     i=i+1;
  }
  
}*/

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
    
    int j=n+i-1;
    
    while (j)
    {
        cout<<"*"<<" ";
        j=j-1;
    }
    

     cout<<endl;
     i=i+1;
  }
  
}