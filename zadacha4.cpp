#include <iostream>
#include "headers/validate_in_cycle.hpp"

using namespace::std;

float cout_cin(char n){
    float res;
    cout << "Input float param with name: " << n << "\n";
    res = validate_in_cycle();
    return res;
}

int calc_and_print(float a, float b, float c) {

    float sum = {a + b + c};
    float prod = {a*b*c};
    float av = {(a+b+c) / 3};

    cout << "Sum:\t" << sum <<"\n";
    cout << "Product:\t" << prod <<"\n";
    cout << "Average:\t" << av <<"\n";
    return 0;
}

int main() {
    float a, b, c;
    a = cout_cin('a');
    b = cout_cin('b');
    c = cout_cin('c');
    
    calc_and_print(a, b, c);
}