#pragma once

#include <generator/base/BaseBlockGenerator.h>

class TemplateBlockGenerator : public BaseBlockGenerator {
public:
  TemplateBlockGenerator();
  TemplateBlockGenerator(std::string);

  std::string generate() override;

private:
  std::string styleClass_;
};
