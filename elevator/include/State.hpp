#ifndef STATE_HPP
#define STATE_HPP
#include <iostream>
class Elevator;

class State {
 public:
  virtual ~State() = default;
  virtual void setContext(Elevator *currentContext) = 0;

  virtual void moveUp() = 0;
  virtual void moveDown() = 0;
  virtual int getFloor() = 0;
};

#endif