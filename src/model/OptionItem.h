#ifndef OPTIONSITEM_H_
#define OPTIONSITEM_H_
#include <functional>
#include <string>

#include "stdint.h"

class OptionItem {
 public:
  uint8_t id;
  std::string name;
  std::function<void()> onClick;
};

#endif  // OPTIONSITEM_H_