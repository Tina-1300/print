#include <iostream>
#include "python"

int main(){

    int user_age = input<int>("enter your old : ");
    print("I have ", user_age, " ", "old");

    return 0;
}
// g++ -o test.exe test.cpp & color