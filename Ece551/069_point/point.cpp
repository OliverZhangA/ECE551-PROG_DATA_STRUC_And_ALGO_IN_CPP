#include "point.hpp"

#include <cmath>
void Point::move(double dx, double dy) {
  x += dx;
  y += dy;
  return;
}
double Point::distanceFrom(const Point & p) {
  double dx = p.x - x;
  double dy = p.y - y;
  return std::sqrt(dx * dx + dy * dy);
}
