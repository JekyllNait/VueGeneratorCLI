#include <iostream>

#include <outputManager/StdOutputManager.h>

StdOutputManager::StdOutputManager() {
}

void StdOutputManager::operator<<(std::string generatedMessage) {
  std::cout << generatedMessage;
}