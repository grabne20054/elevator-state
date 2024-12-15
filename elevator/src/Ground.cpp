#include "../include/Ground.hpp"

#include "../include/FirstFloor.hpp"

void Ground::moveUp() {
  std::cout << "Elevator is moving up from ground floor" << std::endl;
  context->change_state(std::make_unique<FirstFloor>());
}

void Ground::moveDown() {
  std::cout << "Elevator cannot move lower" << std::endl;
}

int Ground::getFloor() { return 0; }

void Ground::setContext(Elevator* currentContext) { context = currentContext; }
