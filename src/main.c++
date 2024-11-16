#include <iostream>
#include <string>

#include "Generator.h"

int main(int argc, char *argv[]) {
  Generator generator{""};

  if (argc > 1) {
    generator = {argv[1]};
  }

  generator.generate();

  return 0;
}
