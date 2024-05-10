#include "Rectangle.h"

Rectangle::Rectangle() : length_(0.0), width_(0.0) {}

Rectangle::~Rectangle() {}

void Rectangle::setLength(float length) {
  length_ = length;
}

float Rectangle::getLength() const {
  return length_;
}

void Rectangle::setWidth(float width) {
  width_ = width;
}

float Rectangle::getWidth() const {
  return width_;
}

float Rectangle::calculateArea() const {
  return length_ * width_;
}
