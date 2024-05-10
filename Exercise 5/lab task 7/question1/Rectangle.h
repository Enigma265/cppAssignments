#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
  // Default constructor initializes length and width to 0.0
  Rectangle();

  // Destructor (does nothing for now)
  ~Rectangle();

  // Accessor methods to set length
  void setLength(float length);

  // Accessor methods to get length
  float getLength() const;

  // Accessor methods to set width
  void setWidth(float width);

  // Accessor methods to get width
  float getWidth() const;

  // Member function to calculate and return area
  float calculateArea() const;

private:
  // Private member variables
  float length_;
  float width_;
};

#endif
