#ifndef IOLISTCOMPONENT_H_
#define IOLISTCOMPONENT_H_

#include <vector>

#include "IoItem.h"

class IoListComponent {
 private:
  std::vector<IoItem> items;

 public:
  /* */
  void render();
};

#endif  // IOLISTCOMPONENT_H_
