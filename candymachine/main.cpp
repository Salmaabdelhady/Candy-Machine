#include <iostream>
#include "cashRegister.h"
#include "Dispenser.h"

using namespace std;

void showSelection()
{
    cout<<"**** Welcome to Candy Machine ****"<<endl;
    cout<<"To select an item , enter"<<endl;
    cout<<"1 for Candy"<<endl;
    cout<<"2 for Chips"<<endl;
    cout<<"3 for Gum"<<endl;
    cout<<"4 for Cookies"<<endl;
    cout<<"0 to exit"<<endl;
}

void sellProduct(Dispenser& item , cashRegister counter)
{
    double amount1;
    double amount2;
    if(item.getNumberofitems()>0)
    {
        cout<<"Please deposit "<<item.getCostofitem()<<" cents. "<<endl;
        cin>>amount1;
        if(amount1<item.getCostofitem())
        {
            cout<<"Please deposit another "<<item.getCostofitem()-amount1<<" cents."<<endl;
            cin>>amount2;
            amount1+=amount2;
        }
        if(amount1 >= item.getCostofitem())
        {
            counter.acceptedAmount(amount1);
            item.itemssold();
            cout<<"Collect your item at the bottom and enjoy."<<endl;
            cout<<"=========================================="<<endl<<endl;
        }
        else
        {
            cout<<"The amount is not enough."<<endl;
            cout<<"Collect what you deposited."<<endl<<endl;
            cout<<"**************************************"<<endl;
        }
    }
    else
    {
        cout<<"Sorry,this item is sold ont"<<endl;
    }
}


int main()
{
    cashRegister R1;
    Dispenser candy(50,15);
    Dispenser chips(50,20);
    Dispenser gum(100,10);
    Dispenser Cookies(70,30);

    int choice;

    showSelection();
    cin>>choice;

    while(choice !=0)
    {
        switch(choice)
        {
        case 1:
            sellProduct(candy , R1);
            break;
        case 2:
            sellProduct(chips , R1);
            break;
        case 3:
            sellProduct(gum , R1);
            break;
        case 4:
            sellProduct(Cookies,R1);
            break;
        default:
            cout<<"Invalid selection"<<endl;
            break;
        }
        showSelection();
        cin>>choice;
    }



    return 0;
}
