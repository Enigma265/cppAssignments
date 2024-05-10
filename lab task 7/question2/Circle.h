#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

namespace shapes {

class Circle : public Shape {
public:
  // Default constructor initializes radius to 0.0
  Circle();

  // Overloaded constructor initializes radius
  Circle(float radius);

  // Accessor method to get radius
  float getRadius() const;

  // Accessor method to set radius
  void setRadius(float radius);

private:
  float radius_;
};

}  // namespace shapes

#endif
