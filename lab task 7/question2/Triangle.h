#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

namespace shapes {

class Triangle : public Shape {
public:
  // Default constructor initializes base and height to 0.0
  Triangle();

  // Overloaded constructor initializes base and height
  Triangle(float base, float height);

  // Accessor methods to get base and height
  float getBase() const;
  float getHeight() const;

  // Accessor methods to set base and height
  void setBase(float base);
  void setHeight(float height);

private:
  float base_;
  float height_;
};

}  // namespace shapes

#endif
