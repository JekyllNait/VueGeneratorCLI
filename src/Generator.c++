#include <iostream>

#include <Generator.h>

Generator::Generator(std::string component) {
  component_ = component;
  componentClass_ = "." + component;

  mScriptBlockGenerator = {componentClass_};
  mStyleBlockGenerator = {componentClass_};
  mTemplateBlockGenerator = {componentClass_};
}

void Generator::generate() {
  addTemplateBlock();

  addEmptyBlock();
  addScriptBlock();

  addEmptyBlock();
  addStyleBlock();

  addEndingBlock();
}

void Generator::addEmptyBlock() {
  std::cout << "\n\n";
}

void Generator::addEndingBlock() {
  std::cout << "\n";
}

void Generator::addTemplateBlock() {
  mStdOutputManager << mTemplateBlockGenerator.generate();
}

void Generator::addScriptBlock() {
  mStdOutputManager << mScriptBlockGenerator.generate();
}

void Generator::addStyleBlock() {
  mStdOutputManager << mStyleBlockGenerator.generate();
}