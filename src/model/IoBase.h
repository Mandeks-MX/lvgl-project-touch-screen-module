#ifndef IOBASE_H_
#define IOBASE_H_
#include <string>

#include "IoTypeEnum.h"
#include "stdint.h"

class IoBase {
 private:
 public:
  uint8_t id;
  std::string name;
  Io_TypeDef ioType;
};

#endif  // IOBASE_H_