#ifndef HEADERCOMPONENT_H_
#define HEADERCOMPONENT_H_
#include <string>

#include "Config.h"
#include "RoomModeEnum.h"
#include "stdint.h"

class HeaderComponent {
 private:
  uint8_t _month;
  uint8_t _day;
  uint8_t _hour;
  uint8_t _minutes;
  uint8_t _weekDay;
  int8_t _currTemp;
  uint8_t _iconId;
  // this string is for current weather status (Cloudly, Rain, Sunny,...)
  // or rendering Cleaning Mode based state machine
  std::string _status;

 public:
  void render() {
    // if is cleaning mode show Cleaning mode label otherwise show weather icon, curr temp and status
    if (cfg.roomMode == CLEANING) {
      // render cleaning
    } else {
      // render weather status
    }
  }
};

#endif  // HEADERCOMPONENT_H_