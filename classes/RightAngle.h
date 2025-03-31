#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class RightAngled {
public:
  class Triangle {
  private:
    double a, b, c;
  public:
    Triangle() : a(0), b(0), c(0) {}
    Triangle(double a, double b, double c) : a(a), b(b), c(c) {}

    double getA() const { return a; }
    double getB() const { return b; }
    double getC() const { return c; }
    void setA(double val) { a = val; }
    void setB(double val) { b = val; }
    void setC(double val) { c = val; }

    void Init(double a, double b, double c);
    void Read();
    void Display() const;
    string toString() const;

    void changeSides(double newA, double newB, double newC);
    double angleA() const;
    double angleB() const;
    double angleC() const;
    double perimeter() const;
  };

private:
  Triangle triangle;
  double area;

  void calculateArea();

public:
  RightAngled() : area(0) {}
  RightAngled(double a, double b) : triangle(a, b, sqrt(a* a + b * b)) { calculateArea(); }

  const Triangle& getTriangle() const { return triangle; }
  void setTriangle(const Triangle& t);
  double getArea() const { return area; }

  void Init(double a, double b);
  void Read();
  void Display() const;
  string toString() const;

};
