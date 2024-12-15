#include "../include/SecondFloor.hpp"

#include "../include/FirstFloor.hpp"

void SecondFloor::moveDown() {
  std::cout << "Elevator is moving down from second floor" << std::endl;
  context->change_state(std::make_unique<FirstFloor>());
}

void SecondFloor::moveUp() {
  std::cout << "Elevator cannot move higher" << std::endl;
}

int SecondFloor::getFloor() { return 2; }

void SecondFloor::setContext(Elevator* currentContext) {
  context = currentContext;
}
