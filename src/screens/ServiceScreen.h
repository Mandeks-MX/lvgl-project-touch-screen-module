#ifndef SERVICESCREEN_H_
#define SERVICESCREEN_H_

#include <vector>

#include "ServiceItem.h"

class ServiceScreen {
 private:
  std::vector<ServiceItem> services;

  void UIAction_Tick() {
    // tick/untick service by clicking on service
  }

 public:
  /*
   Rendering Process:
   1. Render Header component with status "Cleaning mode"
   2. Render a label indicating the functionality for ticking/unticking services.
   3. Ensure each item in the services list is rendered and clickable to toggle its ticked/unticked status.
   4. Implement scrolling functionality for the services list to accommodate screens with many services.
   */
  void render();
};

#endif  // SERVICESCREEN_H_