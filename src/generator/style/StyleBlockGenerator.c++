#include <sstream>

#include <generator/style/StyleBlockGenerator.h>

StyleBlockGenerator::StyleBlockGenerator() {
}

StyleBlockGenerator::StyleBlockGenerator(std::string styleClass) {
  styleClass_ = styleClass;
}

std::string StyleBlockGenerator::generate() {
  std::stringstream ss;

  ss << "<style>" << "\n";

  if (styleClass_ != ".") {
    ss << styleClass_ << " {\n\n}\n";
  }

  ss << "</style>";

  return ss.str();
}