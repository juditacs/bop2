/*
 * consts.cpp
 * Copyright (C) 2020 Judit Acs <judit@sch.bme.hu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>

int main(int argc, char* argv[]) {
    int i1 = 0, i2 = 1;
    const int c1 = 12; // must be initialized
    // c1 = 13; // not OK

    // must use const pointer (const int* OR int const*)
    //int* p1 = &c1; // not OK
    const int* p2 = & c1;
    // the pointer is not const, we can change it. It can point to a non-const
    p2 = &i1;
    // but we cannot change it through this pointer
    //*p2 = 13; // not OK
    // constant pointer
    int* const p3 = &i1;
    //p3 = &i2; // not OK
    // but we can change the int
    *p3 = 15;

    // references are constant to begin with
    // const always refers to the value
    const int& r1 = i1;
    // r1 = 12; // not OK
}

