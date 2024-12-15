#include <criterion/criterion.h>

#include "Elevator.hpp"
#include "FirstFloor.hpp"
#include "Ground.hpp"
#include "SecondFloor.hpp"

// Tests for Elevator

Test(Test101, ElevatorInitialState) {
  auto initialState = std::make_unique<Ground>();
  Elevator elevator(std::move(initialState));

  cr_assert(0 == elevator.state->getFloor());
}

Test(Test102, ElevatorMoveToFirstFloor) {
  auto initialState = std::make_unique<Ground>();
  Elevator elevator(std::move(initialState));

  elevator.moveToState(std::make_unique<FirstFloor>());

  cr_assert(1 == elevator.state->getFloor());
}

Test(Test103, ElevatorMoveToSecondFloor) {
  auto initialState = std::make_unique<Ground>();
  Elevator elevator(std::move(initialState));

  elevator.moveToState(std::make_unique<SecondFloor>());

  cr_assert(2 == elevator.state->getFloor());
}

Test(Test104, ElevatorMoveToGroundFloor) {
  auto initialState = std::make_unique<SecondFloor>();
  Elevator elevator(std::move(initialState));

  elevator.moveToState(std::make_unique<Ground>());

  cr_assert(0 == elevator.state->getFloor());
}

Test(Test105, ElevatorMoveToFirstFloorAndBack) {
  auto initialState = std::make_unique<Ground>();
  Elevator elevator(std::move(initialState));

  elevator.moveToState(std::make_unique<FirstFloor>());
  elevator.moveToState(std::make_unique<Ground>());

  cr_assert(0 == elevator.state->getFloor());
}

Test(Test106, ElevatorMoveToSecondFloorAndBack) {
  auto initialState = std::make_unique<Ground>();
  Elevator elevator(std::move(initialState));

  elevator.moveToState(std::make_unique<SecondFloor>());
  elevator.moveToState(std::make_unique<Ground>());

  cr_assert(0 == elevator.state->getFloor());
}

Test(Test107, ElevatorMoveToFirstFloorAndSecondFloor) {
  auto initialState = std::make_unique<Ground>();
  Elevator elevator(std::move(initialState));

  elevator.moveToState(std::make_unique<FirstFloor>());
  elevator.moveToState(std::make_unique<SecondFloor>());

  cr_assert(2 == elevator.state->getFloor());
}

Test(Test108, ElevatorMoveToSecondFloorAndFirstFloor) {
  auto initialState = std::make_unique<Ground>();
  Elevator elevator(std::move(initialState));

  elevator.moveToState(std::make_unique<SecondFloor>());
  elevator.moveToState(std::make_unique<FirstFloor>());

  cr_assert(1 == elevator.state->getFloor());
}

Test(Test109, ElevatorMoveToFirstFloorAndGroundFloor) {
  auto initialState = std::make_unique<Ground>();
  Elevator elevator(std::move(initialState));

  elevator.moveToState(std::make_unique<FirstFloor>());
  elevator.moveToState(std::make_unique<Ground>());

  cr_assert(0 == elevator.state->getFloor());
}

Test(Test110, ElevatorMoveToGroundFloorAndFirstFloor) {
  auto initialState = std::make_unique<Ground>();
  Elevator elevator(std::move(initialState));

  elevator.moveToState(std::make_unique<Ground>());
  elevator.moveToState(std::make_unique<FirstFloor>());

  cr_assert(1 == elevator.state->getFloor());
}

Test(Test111, ElevatorMoveToSecondFloorAndGroundFloor) {
  auto initialState = std::make_unique<Ground>();
  Elevator elevator(std::move(initialState));

  elevator.moveToState(std::make_unique<SecondFloor>());
  elevator.moveToState(std::make_unique<Ground>());

  cr_assert(0 == elevator.state->getFloor());
}

// Tests for Ground

Test(Test201, GroundMoveUp) {
  auto initialState = std::make_unique<Ground>();
  Elevator elevator(std::move(initialState));

  elevator.state->moveUp();

  cr_assert(1 == elevator.state->getFloor());
}

Test(Test202, GroundMoveDown) {
  auto initialState = std::make_unique<Ground>();
  Elevator elevator(std::move(initialState));

  elevator.state->moveDown();

  cr_assert(0 == elevator.state->getFloor());
}

// Tests for FirstFloor

Test(Test301, FirstFloorMoveUp) {
  auto initialState = std::make_unique<FirstFloor>();
  Elevator elevator(std::move(initialState));

  elevator.state->moveUp();

  cr_assert(2 == elevator.state->getFloor());
}

Test(Test302, FirstFloorMoveDown) {
  auto initialState = std::make_unique<FirstFloor>();
  Elevator elevator(std::move(initialState));

  elevator.state->moveDown();

  cr_assert(0 == elevator.state->getFloor());
}

// Tests for SecondFloor

Test(Test401, SecondFloorMoveUp) {
  auto initialState = std::make_unique<SecondFloor>();
  Elevator elevator(std::move(initialState));

  elevator.state->moveUp();

  cr_assert(2 == elevator.state->getFloor());
}

Test(Test402, SecondFloorMoveDown) {
  auto initialState = std::make_unique<SecondFloor>();
  Elevator elevator(std::move(initialState));

  elevator.state->moveDown();

  cr_assert(1 == elevator.state->getFloor());
}
