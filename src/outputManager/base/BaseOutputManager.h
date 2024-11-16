#pragma once

#include <string>

class BaseOutputManager {
public:
  virtual void operator<<(std::string) = 0;
};