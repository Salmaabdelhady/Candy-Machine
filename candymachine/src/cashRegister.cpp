#include "cashRegister.h"

cashRegister::cashRegister(int c)
{
    if(cash>=0)
        cash = c;
    else
        cash = 500;
}
int cashRegister::getCurrentBalance() const
{
    return cash;
}
void cashRegister::acceptedAmount(int amount)
{
    cash += amount;
}
