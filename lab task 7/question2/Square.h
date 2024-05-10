#include "Square.h"

namespace shapes {

Square::Square() : sideLength_(0.0) {}

Square::Square(float sideLength) : sideLength_(sideLength) {}

float Square::getSideLength() const {
  return sideLength_;
}

void Square::setSideLength(float sideLength) {
  sideLength_ = sideLength;
}

}  // namespace shapes
