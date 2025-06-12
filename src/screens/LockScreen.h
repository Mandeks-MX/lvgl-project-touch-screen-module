#ifndef LOCKSCREEN_H_
#define LOCKSCREEN_H_
#include <string>

#include "ForecastItem.h"
#include "InfoItem.h"
#include "stdint.h"
#include "vector"

class LockScreen {
 private:
  bool _isDimmed;
  uint8_t _month;
  uint8_t _day;
  uint8_t _hour;
  uint8_t _minutes;
  uint8_t _weekDay;
  std::string greet;

  int8_t currentTemp;
  std::string currentWeatherStatus;
  uint8_t currentWeatherIconId;

  // info list
  std::vector<InfoItem> infoList;
  // forecast list
  std::vector<ForecastItem> forecastList;

 public:
  void UIAction_openDeviceGroup();

  // Clicking on display when is inactive (dimmed) switch to active screem
  void UIAction_Activate();

  /*
   Rendering Process:
   1. Render the current date and time.
   2. Render a label indicating the greeting message.
   3. Render the information list. (inoList variable)
   4. Render the current temperature and weather status.
   5. Render the weather forecast.
   6. Render the footer with an option to open the device list.
  */
  void render();
};

#endif  // LOCKSCREEN_H_
