#ifndef DEVICEGROUPSCREEN_H_
#define DEVICEGROUPSCREEN_H_
#include <vector>

#include "IoItem.h"
#include "Thermostat.h"

class DeviceGroupScreen {
 private:
  std::vector<Thermostat> thermostat;
  std::vector<IoItem> IoList;

  void UIAction_DeviceValueChange();
  void UIAction_OrderHotelServiceBtnClicked();

 public:
  void render() {
    // 1. Render Header component with status "Cleaning mode"
    // 2. & 3.  If the list contains thermostats, render them first on the left side.
    // Render IoList next to the thermostats; otherwise, render IoList at the beginning.
    // 4. Render footer with an option to open the Order Hotel Service screen.
  }
};

#endif  // DEVICEGROUPSCREEN_H_