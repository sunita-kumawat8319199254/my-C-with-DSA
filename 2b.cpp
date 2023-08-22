//data type in cpp
#include<iostream>
using namespace std;
int main()
{
int a=3;
cout<<a<<endl; 
int size=sizeof(a);
cout<<"the size of integer is "<<size<<endl;

char b='a';
cout<<b<<endl;
int charsize=sizeof(b);
cout<<"the size of char is" <<charsize<<endl;


float f=3.4;
cout<<f<<endl;
int floatsize=sizeof(f);
cout<<"the size of float is" <<floatsize<<endl;

double d=3.44;
cout<<d<<endl;
int doublesize=sizeof(d);
cout<<"the size of double is" <<doublesize<<endl;

bool c=true;
cout<<c<<endl;
int boolsize=sizeof(c);
cout<<"the size of bool is" <<boolsize<<endl;

}
