#pragma once

#include <outputManager/base/BaseOutputManager.h>

class StdOutputManager : public BaseOutputManager {
public:
  StdOutputManager();
  void operator<<(std::string) override;
};