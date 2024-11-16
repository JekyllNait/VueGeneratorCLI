#pragma once

#include <string>

#include <generator/script/ScriptBlockGenerator.h>
#include <generator/style/StyleBlockGenerator.h>
#include <generator/template/TemplateBlockGenerator.h>
#include <outputManager/StdOutputManager.h>

class Generator {
public:
  Generator(std::string);
  void generate();

protected:
  void addTemplateBlock();
  void addScriptBlock();
  void addStyleBlock();
  void addEmptyBlock();
  void addEndingBlock();

protected:
  ScriptBlockGenerator mScriptBlockGenerator;
  StyleBlockGenerator mStyleBlockGenerator;
  TemplateBlockGenerator mTemplateBlockGenerator;
  StdOutputManager mStdOutputManager;

  std::string component_;
  std::string componentClass_;
};