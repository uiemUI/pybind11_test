#pragma once

#include <string>

class Dog {
private:
  std::string name_;
  float position_;

public:
  Dog(const std::string &name, float position = 0.f)
      : name_{name}, position_{position} {}
  void add(float distance);
  void sub(float distance);
  float current_position() const;
  void set_position(float position) { position_ = position; }
  float get_position() { return position_; }
  /*
    void sync_position() { positionxx = position_; }
    float positionxx;
    */
};