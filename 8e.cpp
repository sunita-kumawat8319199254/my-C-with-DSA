//find power of a,b without function
/*#include<iostream>
using namespace std;
int main()/
{
  int a;
  int b;
  cout<<"enter your digit a"<<endl;
  cin>>a;
  cout<<"enter your power  digit b"<<endl;
  cin>>b;
int ans=1;
for (int i = 1; i <=b; i++)
{
    ans=ans*a;
}


cout<<a<<" "<<"power"<<b<<" "<<"is="<<ans<<endl;

//find power of c,d without function
int c;
  int d;
  cout<<"enter your digit c"<<endl;
  cin>>c;
  cout<<"enter your power  digit d"<<endl;
  cin>>d;
  ans=1;
for (int i = 1; i <=d; i++)
{
    ans=ans*c;
}
cout<<c<<" "<<"power"<<d<<" "<<"is="<<ans<<endl;

//find power of e,f without function

int e;
  int f;
  cout<<"enter your digit e"<<endl;
  cin>>e;
  cout<<"enter your power  digit c"<<endl;
  cin>>f;
ans=1;
for (int i = 1; i <=f; i++)
{
    ans=ans*e;
}
cout<<e<<" "<<"power"<<f<<" "<<"is="<<ans<<endl;

}*/



//find power with function

#include<iostream>
using namespace std;

int findpower(int m, int n)
{
    int ans=1;
    for (int i = 1; i <=n; i++)
    {
       ans=ans*m;
    }
    return ans;
}
int main()
{
    int a;
    int b;
    int ans;
    cout<<"enter the digit a "<<endl;
    cin>>a;
     cout<<"enter the digit b "<<endl;
    cin>>b;
    ans=findpower(a,b);
    cout<<a<<" "<<"power"<<b<<" "<<"is="<<ans<<endl;
}



