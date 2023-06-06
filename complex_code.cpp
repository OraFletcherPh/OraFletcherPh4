#include <iostream>
#include <vector>
#include <cmath>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double realPart, double imaginaryPart) {
        real = realPart;
        imaginary = imaginaryPart;
    }

    ComplexNumber operator+(const ComplexNumber& other) const {
        double sumReal = real + other.real;
        double sumImaginary = imaginary + other.imaginary;
        return ComplexNumber(sumReal, sumImaginary);
    }

    ComplexNumber operator*(const ComplexNumber& other) const {
        double productReal = (real * other.real) - (imaginary * other.imaginary);
        double productImaginary = (real * other.imaginary) + (imaginary * other.real);
        return ComplexNumber(productReal, productImaginary);
    }

    double magnitude() const {
        return std::sqrt(real * real + imaginary * imaginary);
    }

    void print() const {
        std::cout << "(" << real << " + " << imaginary << "i)";
    }
};

int main() {
    ComplexNumber c1(2.0, 3.0);
    ComplexNumber c2(1.0, -2.0);

    ComplexNumber sum = c1 + c2;
    ComplexNumber product = c1 * c2;

    std::cout << "c1: ";
    c1.print();
    std::cout << std::endl;

    std::cout << "c2: ";
    c2.print();
    std::cout << std::endl;

    std::cout << "Sum: ";
    sum.print();
    std::cout << std::endl;

    std::cout << "Product: ";
    product.print();
    std::cout << std::endl;

    std::cout << "Magnitude of c1: " << c1.magnitude() << std::endl;
    std::cout << "Magnitude of c2: " << c2.magnitude() << std::endl;

    return 0;
}
