#ifndef FORECASTITEM_H_
#define FORECASTITEM_H_

#include <string>

#include "stdint.h"

struct ForecastItem {
  uint8_t iconId;
  uint8_t hour;
  int8_t temperature;
};

#endif  // FORECASTITEM_H_
