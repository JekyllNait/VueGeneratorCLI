#include <sstream>

#include <generator/template/TemplateBlockGenerator.h>

TemplateBlockGenerator::TemplateBlockGenerator() {
}

TemplateBlockGenerator::TemplateBlockGenerator(std::string styleClass) {
  styleClass_ = styleClass;
}

std::string TemplateBlockGenerator::generate() {
  std::stringstream ss;

  ss << "<template>" << "\n";

  if (styleClass_ != ".") {
    ss << styleClass_ << "\n";
  }

  ss << "</template>";

  return ss.str();
}