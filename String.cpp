//
// Created by dima on 12.12.17.
//

#include "String.h"


String::String() {
    size_ = 0;
    str = 0;
}

String::String(char * str) : size_(strlen(str)) , str(new char[size_ + 1]) {
    strcpy(this->str, str);
}

String::String(String const &other) {
    size_ = other.size_;
    str = new char[size_ + 1];
    strcpy(this->str, other.str);
}

String& String::operator=(String const &other) {
    if (this != &other) {
        String(other).swap(*this);
    }
    return *this;
}

void String::swap(String &other) {
    std::swap(size_, other.size_);
    std::swap(str, other.str);
}


char* String::get() {
    return  this->str;
}


String::~String() {
    delete []str;
}
