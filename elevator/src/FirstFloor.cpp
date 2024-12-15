#include "../include/FirstFloor.hpp"

#include "../include/Ground.hpp"
#include "../include/SecondFloor.hpp"

void FirstFloor::moveUp() {
  std::cout << "Elevator is moving up from first floor" << std::endl;
  context->change_state(std::make_unique<SecondFloor>());
}

void FirstFloor::moveDown() {
  std::cout << "Elevator is moving down from first floor" << std::endl;
  context->change_state(std::make_unique<Ground>());
}

int FirstFloor::getFloor() { return 1; }

void FirstFloor::setContext(Elevator* currentContext) {
  context = currentContext;
}
