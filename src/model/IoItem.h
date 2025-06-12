#ifndef IOITEM_H_
#define IOITEM_H_

#include "IoBase.h"
#include "TileSizeEnum.h"
#include "stdint.h"

class IoItem : public IoBase {
 public:
  uint8_t iconId;
  TileSize_TypeDef tileSize;
  bool state;
};
#endif  // IOITEM_H_
