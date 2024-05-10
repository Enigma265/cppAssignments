#include "Triangle.h"

namespace shapes {

Triangle::Triangle() : base_(0.0), height_(0.0) {}

Triangle::Triangle(float base, float height) : base_(base), height_(height) {}

float Triangle::getBase() const {
  return base_;
}

void Triangle::setBase(float base) {
  base_ = base;
}

float Triangle::getHeight() const {
  return height_;
}

void Triangle::setHeight(float height) {
  height_ = height;
}

}  // namespace shapes
