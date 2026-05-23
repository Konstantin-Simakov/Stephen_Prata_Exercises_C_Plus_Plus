// exercise6.cpp
// Move class testing.

#include "exercise6.h"
#include <iostream>

int main(void)
{
    using std::cout;
    Move mv1, mv2(5, 3);

    cout << "mv1\n";    
    mv1.showMove();
    cout << "mv2\n";    
    mv2.showMove();
    
    cout << "\nmv1 adds mv2\n";
    mv1.add(mv2);

    cout << "\nmv1\n";    
    mv1.showMove();
    cout << "mv2\n";    
    mv2.showMove();
    
    return 0;
}

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showMove(void) const
{
    std::cout << "x = " << x
              << ", y = " << y << std::endl;
}

Move Move::add(const Move & m)
{
    x += m.x;
    y += m.y;

    return *this;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
