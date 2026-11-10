#include <iostream>
#include "headers/calc.hpp"

using namespace::std;

// Тука нарочно съм дефинирал една допълнителна функция за следваща задача.
int calc() {
    int a = {10}; // Първо число
    float b = {3.14}; //Второ

    //определям ги като float, да не загубя реална част.
    float sum = {a + b}; 
    float dif = {a - b};
    float prod = {a*b};

    cout << "A: " << a << "\tB:" << b << "\n";
    cout << "Sum: " << sum << "\n";
    cout << "Difference: " << dif << "\n";
    cout << "Product: " << prod << "\n";
    return 0;
}

int main() {
    calc();
}