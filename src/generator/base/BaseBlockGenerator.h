#pragma once

#include <string>

class BaseBlockGenerator {
public:
  virtual std::string generate() = 0;
};