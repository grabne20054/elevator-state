#include "../include/Elevator.hpp"
#include "../include/FirstFloor.hpp"
#include "../include/Ground.hpp"
#include "../include/SecondFloor.hpp"

int main(void) {
  // inital Position
  auto initialState = std::make_unique<SecondFloor>();

  Elevator elevator(std::move(initialState));

  elevator.moveToState(std::make_unique<Ground>());

  return 0;
}
