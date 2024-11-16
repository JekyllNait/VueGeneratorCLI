#pragma once

#include <generator/base/BaseBlockGenerator.h>

class ScriptBlockGenerator : public BaseBlockGenerator {
public:
  ScriptBlockGenerator();
  ScriptBlockGenerator(std::string);

  std::string generate() override;

private:
  std::string styleClass_;
};
