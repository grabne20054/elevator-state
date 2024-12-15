#ifndef FIRSTFLOOR_HPP
#define FIRSTFLOOR_HPP

#include <iostream>
#include <memory>

#include "Elevator.hpp"
#include "State.hpp"

class FirstFloor : public State {
 private:
  Elevator *context;

 public:
  void setContext(Elevator *currentContext) override;

  void moveUp() override;
  void moveDown() override;

  int getFloor() override;
};

#endif
