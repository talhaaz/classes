// Copyright 2015 Evan Misshula

#include <iostream>

class Rectangle {
  int width_, height_;
 public:
  void set_values(int, int);
  int area() {return width_*height_;}
};

class PoliceCar {
 public:
  float const getX() { return locX; }
  float const getY() { return locY; }
  float getFacing() { return facing; }
  int getOfficerCount() { return OfficerCount; }
  void setFacing(float f) { facing = f; }
  void setLocation(float x, float y);
 private:
  float locX;
  float locY;
  float facing;
  int OfficerCount;
}

void PoliceCar::setLocation(float x, float y) {
  locX = x;
  locY = y;
}

void Rectangle::set_values(int x, int y) {
  if ((x < 0.0) || (y < 0.0)) {
    std::cout << "Out of bounds!" << std:endl;
  } else {
  width_ = x;
  height_ = y;
}

int main() {
  Rectangle rect;
  rect.set_values(3, 4);
  std::cout << "area: " << rect.area() << std::endl;
  return 0;
}
