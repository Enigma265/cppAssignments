#include "Circle.h"

namespace shapes {

Circle::Circle() : radius_(0.0) {}

Circle::Circle(float radius) : radius_(radius) {}

float Circle::getRadius() const {
  return radius_;
}

void Circle::setRadius(float radius) {
  radius_ = radius;
}

}  // namespace shapes
