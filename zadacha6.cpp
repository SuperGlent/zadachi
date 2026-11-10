#include <iostream>
#include "headers/validate_in_cycle.hpp" // Тука ще използвам кода от предходна задача, свързан със header.
#include <cmath>

using namespace::std;

void print_function_view() {
    cout << "Function used view \t(5 * (x + 2 * z) / 4) - ((v - 6 * y) / 2)\n";
}

float set_param(char param_name){
    float param;
    cout << "Input param: " << param_name << "\n";
    param = validate_in_cycle(); // функцията - върти в цикъла докато не въведем правилно значение.
    return param;
}

float function_calc(float x, float y, float v, float z) {
    float result = {(5 * (x + 2 * z) / 4) - ((v - 6 * y) / 2)};
    return result;
}

int main() {
    print_function_view();
    char params[4] = {'x', 'y', 'v', 'z'};
    float param_values[4];
    // да не губим време и място, ще взимаме по едно име на параметъра. 
    for (int i = 0; i<=3; i++) {
        param_values[i] = set_param(params[i]);
    }
    float fun_res = function_calc(param_values[0], param_values[1], param_values[2], param_values[3]);
    //Закръглянето до 4 знак)
    fun_res = round(fun_res * 10000.0) / 10000.0;
    cout << "The result of function:\t" << fun_res << "\n";
}