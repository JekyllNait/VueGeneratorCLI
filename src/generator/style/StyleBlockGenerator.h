#pragma once

#include <generator/base/BaseBlockGenerator.h>

class StyleBlockGenerator : public BaseBlockGenerator {
public:
  StyleBlockGenerator();
  StyleBlockGenerator(std::string);

  std::string generate() override;

private:
  std::string styleClass_;
};