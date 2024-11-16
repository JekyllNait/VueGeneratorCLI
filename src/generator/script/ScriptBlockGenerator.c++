#include <sstream>

#include <generator/script/ScriptBlockGenerator.h>

ScriptBlockGenerator::ScriptBlockGenerator() {
}

ScriptBlockGenerator::ScriptBlockGenerator(std::string styleClass) {
  styleClass_ = styleClass;
}

std::string ScriptBlockGenerator::generate() {
  std::stringstream ss;

  ss << "<script>"
     << "\n"
     << "</script>";

  return ss.str();
}