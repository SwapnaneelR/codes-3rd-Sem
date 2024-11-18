#include <iostream>
#include <cmath>
using namespace std;

class complexroot {
    int a, b, c;
public:
    complexroot(int a = 0, int b = 0, int c = 0) : a(a), b(b), c(c) {}

    void root(int a, int b, int c) {
        double real = -b / (2.0 * a);
        double img = sqrt(abs(b * b - 4 * a * c)) / (2.0 * a);
        cout << "Imaginary roots are: " << real << " + i" << img << " and " << real << " - i" << img << endl;
    }
};

class quadratic : public complexroot {
public:
    int a, b, c;
    quadratic(int a = 0, int b = 0, int c = 0) : complexroot(a, b, c), a(a), b(b), c(c) {}

    quadratic operator+(const quadratic &ob) {
        return quadratic(a + ob.a, b + ob.b, c + ob.c);
    }

    double valueat(double x) {
        return a * x * x + b * x + c;
    }

    void root() {
        if (a == 0) {
            cout << "Coefficient 'a' cannot be zero." << endl;
            return;
        }
        double discriminant = b * b - 4 * a * c;
        if (discriminant < 0) {
            complexroot::root(a, b, c);
        } else {
            double real = -b / (2.0 * a);
            double img = sqrt(discriminant) / (2.0 * a);
            cout << "Real roots are: " << real + img << " and " << real - img << endl;
        }
    }

    friend istream &operator>>(istream &is, quadratic &ob) {
        cout << "Enter the coefficients of the quadratic (a, b, c): ";
        is >> ob.a >> ob.b >> ob.c;
        return is;
    }

    friend ostream &operator<<(ostream &os, const quadratic &ob) {
        os << ob.a << "x^2 + " << ob.b << "x + " << ob.c;
        return os;
    }
};

int main() {
    quadratic q1, q2, q3;
    cin >> q1 >> q2;
    cout << q1 << endl;
    cout << q2 << endl;
    q3 = q1 + q2;
    cout << q3 << endl;
    q3.root();
    return 0;
}

