#include "RightAngle.h"
#include <iostream>
#include <string>
#include <cmath>

void RightAngled::Triangle::Init(double a, double b, double c) {
  setA(a);
  setB(b);
  setC(c);
}

void RightAngled::Triangle::Read() {
  cout << "Enter side a: ";
  cin >> a;
  cout << "Enter side b: ";
  cin >> b;
  cout << "Enter side c: ";
  cin >> c;
}

void RightAngled::Triangle::Display() const {
  cout << "Triangle sides: " << a << ", " << b << ", " << c << endl;
}

string RightAngled::Triangle::toString() const {
  return "Sides: " + to_string(a) + ", " + to_string(b) + ", " + to_string(c);
}

void RightAngled::Triangle::changeSides(double newA, double newB, double newC) {
  a = newA; b = newB; c = newC;
}

double RightAngled::Triangle::angleA() const {
  return acos((b * b + c * c - a * a) / (2 * b * c)) * 180 / std::acos(-1);
}

double RightAngled::Triangle::angleB() const {
  return acos((a * a + c * c - b * b) / (2 * a * c)) * 180 / std::acos(-1);
}

double RightAngled::Triangle::angleC() const {
  return acos((a * a + b * b - c * c) / (2 * a * b)) * 180 / std::acos(-1);
}

double RightAngled::Triangle::perimeter() const {
  return a + b + c;
}

// RightAngled
void RightAngled::calculateArea() {
  area = 0.5 * triangle.getA() * triangle.getB();
}

void RightAngled::setTriangle(const Triangle& t) {
  triangle = t;
  calculateArea();
}

void RightAngled::Init(double a, double b) {
  triangle.Init(a, b, sqrt(a * a + b * b));
  calculateArea();
}

void RightAngled::Read() {
  double a, b;
  cout << "Enter leg 1: ";
  cin >> a;
  cout << "Enter leg 2: ";
  cin >> b;
  Init(a, b);
}

void RightAngled::Display() const {
  triangle.Display();
  cout << "Area: " << area << endl;
}

string RightAngled::toString() const {
  return triangle.toString() + "\nArea: " + to_string(area);
}
