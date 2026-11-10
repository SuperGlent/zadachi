#include <iostream>
#include <string>
#include "headers/validate_in_cycle_universal.hpp"

using namespace std;

int input_validate_age() {
    int age;
    cout << "Input your age here: \n";
    age = validate_in_cycle<int>();
    return age;
}

//тази функция има проблем тъй като преобразува каквото и да е в string, това ще го оправя.
string input_validate_name() {
    string name;
    cout << "Input your name here: \n";
    name = validate_in_cycle<string>();
    return name;
}


int main() {
    int age = input_validate_age();
    string name = input_validate_name();
    cout << "My name is: " << name << " and my age is: " << age;
    return 0;
}