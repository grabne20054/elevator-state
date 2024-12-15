#ifndef ELEVATOR_HPP
#define ELEVATOR_HPP
#include <memory>
#include <queue>

#include "Request.hpp"
#include "State.hpp"

class Elevator {
 public:
  std::unique_ptr<State> state;
  Elevator(std::unique_ptr<State> initialState) {
    change_state(std::move(initialState));
  }

  void moveToState(std::unique_ptr<State> newState) {
    while (this->state->getFloor() != newState->getFloor()) {
      std::cout << "Currently on Floor: " << state->getFloor() << std::endl;
      if (this->state->getFloor() < newState->getFloor()) {
        this->state->moveUp();
      } else {
        this->state->moveDown();
        std::cout << "Moved to Floor: " << state->getFloor() << std::endl;
      }
    }
    std::cout << "Reached destination floor: " << state->getFloor()
              << std::endl;
    change_state(std::move(newState));
  }

  void change_state(std::unique_ptr<State> newState) {
    this->state = std::move(newState);
    this->state->setContext(this);
  }
};

#endif