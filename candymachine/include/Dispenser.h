#ifndef DISPENSER_H
#define DISPENSER_H


class Dispenser
{
private:
    int numberofitems;
    double costofitem;

public:
    Dispenser(int,double);
    int getNumberofitems() const;
    double getCostofitem() const;
    void itemssold();

};

#endif // DISPENSER_H
