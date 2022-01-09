#include <iostream>
#include <cstring>
#include "Mystring.h"


/*---- Provided Constructors and some methods from ----*
 *---- course material. New methods added at bottom----*
 *---- Challenge is to use operator overloading for----*
 *---- new methods.                                ----*/
 
 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

/*----New methods below----*/

// To lower case
Mystring operator-(const Mystring &lhs){
    // Allocate dynamic memory
    char *s = new char[std::strlen(lhs.str) + 1];
    // Copy string into new char array
    std::strcpy(s, lhs.str);
    // tolower all characters
    for(size_t i=0; i<std::strlen(s); i++)
    {
        s[i] = std::tolower(s[i]);
    }
    // Initialize new Mystring
    Mystring temp {s};
    // Free up memory
    delete [] s;
    return temp;
}

// Concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *s = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(s, lhs.str);
    std::strcat(s, rhs.str);
    Mystring temp {s};
    delete [] s;
    return temp;
}
// Concatenation and assignment
Mystring &operator+=(Mystring &lhs, const Mystring &rhs){
    // Use concatenation method
    lhs = lhs + rhs;
    return lhs;
}
// Repeat string
Mystring operator*(const Mystring &lhs, int n){
    Mystring temp;
    for( size_t i=0; i<n; i++)
        temp += lhs;
    return temp;
}
Mystring &operator*=(Mystring &lhs, int n){
    lhs = lhs * n;
    return lhs;
}
// To upper, pre increment
Mystring &operator++(Mystring &lhs){
    // String will be returned after toupper
    for(size_t i=0; i<std::strlen(lhs.str); i++)
        lhs.str[i] = std::toupper(lhs.str[i]);
    return lhs;
}
// To upper, post increment
Mystring operator++(Mystring &lhs, int){
    // Original string will be returned as temp variable, actual
    // string will be "incremented" - uppercased
    Mystring temp (lhs);
    ++lhs;
    return temp;
}

bool operator==(const Mystring &lhs, const Mystring &rhs){
    return std::strcmp(lhs.str, rhs.str) == 0;
}
bool operator!=(const Mystring &lhs, const Mystring &rhs){
    return !(std::strcmp(lhs.str, rhs.str) == 0);
}
bool operator<(const Mystring &lhs, const Mystring &rhs){
    return std::strcmp(lhs.str, rhs.str) < 0;
}
bool operator>(const Mystring &lhs, const Mystring &rhs){
    return std::strcmp(lhs.str, rhs.str) > 0;
}
