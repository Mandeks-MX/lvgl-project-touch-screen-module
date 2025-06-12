#ifndef INFOITEM_H_
#define INFOITEM_H_

#include <string>

#include "stdint.h"

struct InfoItem {
  uint8_t iconId;
  std::string info;
};
#endif  // INFOITEM_H_
