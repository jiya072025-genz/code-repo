#include "calculator.h"
#include <stdexcept>

bool calculate(double a,
               char op,
               double b,
               double& result) {
    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0)
                return false;
            result = a / b;
            break;
        case '%':
            if (b == 0)
                return false;
            result = static_cast<int>(a)
                   % static_cast<int>(b);
            break;
        default:
            return false;
    }
    return true;
}
