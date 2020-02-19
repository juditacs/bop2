/*
 * function_overloading.cpp
 * Copyright (C) 2020 Judit Acs <judit@sch.bme.hu>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <cstring>

struct Date {
    int year, month, day;
};

Date createDate(int year, int month, int day) {
    Date d;
    d.year = year;
    d.month = month;
    d.day = day;
    return d;
}

Date createDate(const char* datestr) {
    int year, month, day;
    sscanf(datestr, "%d%d%d", &year, &month, &day);
    Date d;
    d.year = year;
    d.month = month;
    d.day = day;
    return d;
}

void printDate(Date d) {
    printf("%04d-%02d-%02d\n", d.year, d.month, d.day);
}

int main(int argc, char* argv[]) {
    Date d1, d2;
    d1 = createDate(1988, 11, 1);
    d2 = createDate("2020 02 19");
    printDate(d1);
    printDate(d2);
}

