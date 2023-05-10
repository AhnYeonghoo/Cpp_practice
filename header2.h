#include "header1.h"

namespace header2 {
  int func() {
    header1::foo();
  }
}

namespace {
  int OnlyInThisFile() {}
  
  int only_in_this_file = 0;
  
}

int main() {
  OnlyInThisFile();
  only_in_this_file = 3;
}