#include "dogClass.h"

void Dog::add(float distance) { position_ += distance; }

void Dog::sub(float distance) { position_ -= distance; }

float Dog::current_position() const { return position_; }