// find note in amount how much note 100,50,20,1
#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "ENTER THE THE AMOUNT" << endl;
    cin >> amount;
    int note100 = 0;
    int note50 = 0;
    int note20 = 0;
    
    int note1 = 0;
    while (amount > 0)
    {
        switch (amount >= 100)
        {
        case 1:
            note100++;
            amount -= 100;
            break;
            default:
            switch (amount >= 50)
            {
            case 1:
                note50++;
                amount -= 50;
                break;

            default:
                switch (amount >= 20)
                {
                case 1:
                    note20++;
                    amount -= 20;
                    break;
                default:
                    note1 += amount;
                    amount = 0;
                    break;
                }
                break;
            }
            break;
        }
    }

cout<<"notes required :"<<endl;
cout<<"100:"<<note100<<endl;
cout<<"50:"<<note50<<endl;
cout<<"20:"<<note20<<endl;
cout<<"1:"<<note1<<endl;


}