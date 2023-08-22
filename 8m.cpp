// 3 output questions



// 1photo
/*#include<iostream>
using namespace std;
int update(int a){
    int ans=a*a;
    return ans;
}
int main()
{
int a=12;
a=update(a);
cout<<a<<endl;
}*/


// 2 photo
/*#include <iostream>
using namespace std;
int update(int a)
{
    a -= 5;
    return a;
}
int main()
{
    int a = 15;
    update(a);
    cout << a << endl;
}*/

// 3 photo
#include <iostream>
using namespace std;
int update(int a)
{
    a = a/2;
    return a;
}
int main()
{
    int a = 10;
    a=update(a);
    cout << a << endl;
}
