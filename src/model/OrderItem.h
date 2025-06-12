#ifndef ORDERITEM_H_
#define ORDERITEM_H_
#include "ProductItem.h"

class OrderItem {
 public:
  uint8_t productId;
  uint8_t quantity;
};

#endif  // ORDERITEM_H_