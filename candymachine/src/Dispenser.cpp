#include "Dispenser.h"

Dispenser::Dispenser(int n,double c)
{
    if(numberofitems >= 0)
        numberofitems = n;
    else
        numberofitems = 50;

    if(costofitem >= 0)
        costofitem = c;
    else
        costofitem = 50;
}
int Dispenser::getNumberofitems() const
{
    return numberofitems;
}
double Dispenser::getCostofitem() const
{
    return costofitem;
}
void Dispenser::itemssold()
{
    numberofitems--;
}
