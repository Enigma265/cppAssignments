#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

namespace shapes {

class Shape {
public:
  virtual ~Shape() = default;  // Virtual destructor for proper cleanup
};

}  // namespace shapes

#endif
