//
// Created by dima on 12.12.17.
//

#ifndef STEPIC_STRING_H
#define STEPIC_STRING_H

#include <iostream>
#include <cstring>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;


class String {
private:
    char* str;
    size_t  size_;

public:
    String();
    String(char* str);
    String(String const& other);
    String& operator = (String const& other);

    void swap(String& other);
    char* get();

    virtual ~String();
};


#endif //STEPIC_STRING_H
