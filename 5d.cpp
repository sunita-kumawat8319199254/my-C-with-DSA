// n=234     o/p=produc6t -sum=24-9=15
// product=2*3*4       sum=2+3+4

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter input\n";
    cin>>n;
    int pord=1;
    int sum=0;
    while (n!=0)
    {
        int digit=n%10;
        pord=digit*pord;
        sum=sum+digit;
        n= n/10;
    }
    cout<<"The answere is "<<pord-sum;
}