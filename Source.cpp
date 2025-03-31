#include "./classes/RightAngle.h"
#include <iostream>
using namespace std;

int main() {
    cout << "=== Demonstration of the class Triangle ===" << endl;

    RightAngled::Triangle t1;
    cout << "Input sides of triangle (a b c): ";
    t1.Read();
    cout << "\nOutput:\n";
    t1.Display();
    cout << "Perimeter: " << t1.perimeter() << endl;
    cout << "Angle: " << t1.angleA() << "°, " << t1.angleB() << "°, " << t1.angleC() << "°\n";

    cout << "\n=== Demonstration of the class RightAngled ===" << endl;
    RightAngled rt1;
    cout << "Input legs of right triangle: ";
    rt1.Read();
    cout << "\nOutput:\n";
    rt1.Display();

    cout << "\n=== Array of right triangles ===" << endl;
    const int N = 2;
    RightAngled triangles[N];
    for (int i = 0; i < N; i++) {
        cout << "Triangle #" << i + 1 << ":\n";
        triangles[i].Read();
    }

    cout << "\nAll triangles:\n";
    for (int i = 0; i < N; i++) {
        triangles[i].Display();
    }

    return 0;
}
