#ifndef THERMOSTAT_H_
#define THERMOSTAT_H_

#include <string>

#include "FanSpeedEnum.h"
#include "HeatCoolEnum.h"
#include "IoBase.h"
#include "stdint.h"

class Thermostat : public IoBase {
 public:
  /*
    1. label for the thermostat (IoBase::name)
    2. Current temperature
    3. power state (on/off)
    4. fan speed (off, low, medium, high, auto)  -> off no blue indicator
    5. Decrease temperature button
    6. Desired temperature
    7. Increase temperature button
    8. HeatCool mode - heating, cooling
  */

  float desiredTemp;
  float currentTemp;
  bool power;
  FanSpeed_TypeDef fanSpeed;  // this can be type def enumerated
  HeatCoolMode_TypeDef mode;
};

#endif  // THERMOSTAT_H_