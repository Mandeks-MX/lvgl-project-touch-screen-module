#ifndef CONFIG_H_
#define CONFIG_H_

#include "ScreenStatesEnum.h"
#include "stdint.h"

struct Config {
  uint8_t roomMode;  // cleaning, comfort, eco,...
  uint8_t useCase;   // hotel or bms
  ScreenState_TypeDef screenState;
};

Config cfg;
#endif  // CONFIG_H_