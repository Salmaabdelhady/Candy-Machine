#ifndef CASHREGISTER_H
#define CASHREGISTER_H


class cashRegister
{
private:
    int cash;

public:
    cashRegister(int c = 500 );
    int getCurrentBalance() const;
    void acceptedAmount(int);
};

#endif // CASHREGISTER_H
