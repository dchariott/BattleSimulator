cmake_minimum_required(VERSION 3.13)
project(BattleSimulator)

set(CMAKE_CXX_STANDARD 11)

add_executable(BattleSimulator main.cpp actor.cpp actor.h battleMove.h attackOne.cpp attackOne.h attackTwo.cpp attackTwo.h heal.cpp heal.h stack.h moveManager.h ghost.cpp ghost.h knight.cpp knight.h warrior.cpp warrior.h runner.cpp runner.h moveManager.cpp enums.h)