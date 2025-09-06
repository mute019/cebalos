#include <iostream>

double division(const double& a, const double& b) {
    if (a == 0) {
        //std::cout << "Undefined Behaviour" << "\n";
        return 0.0;
    }
    return a/b;
}