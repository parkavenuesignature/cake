#include <iostream>

double add(double a, double b) {
    std::cout << "\n" << a << " + " << b << " = " << a + b << "\n";
    return a + b;
}

double subtract(double a, double b) {
    std::cout << "\n" << a << " - " << b << " = " << a - b << "\n";
    return a - b;
}

double multiply(double a, double b) {
    std::cout << "\n" << a << " * " << b << " = " << a * b << "\n";
    return a * b;
}

double divide(double a, double b) {
    std::cout << "\n" << a << " / " << b << " = " << a / b << "\n";
    return a / b;
}

int modulo(int a, int b) {
    std::cout << "\n" << a << " % " << b << " = " << a % b << "\n";
    return a % b;
}

int lsh(int a, int b) {
    std::cout << "\n" << a << " << " << b << " = " << (a << b) << "\n";
    return a << b;
}

int rsh(int a, int b) {
    std::cout << "\n" << a << " >> " << b << " = " << (a >> b) << "\n";
    return a >> b;
}

bool AND(bool a, bool b) {
    std::cout << "\n" << a << " AND " << b << " = " << (a && b) << "\n";
    return a && b;
}

bool OR(bool a, bool b) {
    std::cout << "\n" << a << " OR " << b << " = " << (a || b) << "\n";
    return a || b;
}

template<typename T>
void get_operands(T &a, T &b) {
    std::cout << "\nEnter first operand: ";
    std::cin >> a;
    std::cout << "\nEnter second operand: ";
    std::cin >> b;
}

int main() {
    bool repeat = true;
    for (; repeat;) {
        int _operator;
        int i_operand1, i_operand2;
        double d_operand1, d_operand2;
        std::cout << "Enter your Operation: \n "
                     "\t1) + addition\n"
                     "\t2) - subtraction\n"
                     "\t3) * multiplication\n"
                     "\t4) / division\n"
                     "\t5) % modulo\n"
                     "\t6) << left shift\n"
                     "\t7) >> right shift\n"
                     "\t8) logical AND\n"
                     "\t9) logical OR\n"
                     "Operation: ";
        std::cin >> _operator;
        switch (_operator) {
            case 1:
                get_operands(d_operand1, d_operand2);
                add(d_operand1, d_operand2);
                break;
            case 2:
                get_operands(d_operand1, d_operand2);
                subtract(d_operand1, d_operand2);
                break;
            case 3:
                get_operands(d_operand1, d_operand2);
                multiply(d_operand1, d_operand2);
                break;
            case 4:
                get_operands(d_operand1, d_operand2);
                divide(d_operand1, d_operand2);
                break;
            case 5:
                get_operands(i_operand1, i_operand2);
                modulo(i_operand1, i_operand2);
                break;
            case 6:
                get_operands(i_operand1, i_operand2);
                lsh(i_operand1, i_operand2);
                break;
            case 7:
                get_operands(i_operand1, i_operand2);
                rsh(i_operand1, i_operand2);
                break;
            case 8:
                get_operands(i_operand1, i_operand2);
                AND(bool(i_operand1), bool(i_operand2));
                break;
            case 9:
                get_operands(i_operand1, i_operand2);
                OR(bool(i_operand1), bool(i_operand2));
                break;
            default:
                std::cout << "\nInvalid Operand\n";
        }

        int i;
        std::cout << "\nTry Again?\n1) Yes\n";
        std::cin >> i;
        repeat = (i == 1);
    }
    return 0;
}
