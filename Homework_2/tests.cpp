#include <cassert>
#include "game.cpp"
#include <iostream>

using namespace std;

void testIsEven()
{
    assert(isEven(2) == true);
    assert(isEven(3) == false);
    assert(isEven(0) == true);
    assert(isEven(-1) == false);
}

