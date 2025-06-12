#ifndef SERVICE_H_
#define SERVICE_H_
#include <string>

#include "stdint.h"

struct ServiceItem {
  uint8_t id;
  std::string name;
  bool state;  // checked, unchecked
};

#endif  // SERVICE_H_