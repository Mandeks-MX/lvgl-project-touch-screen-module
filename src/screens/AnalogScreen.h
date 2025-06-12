#ifndef ANALOGSCREEN_H_
#define ANALOGSCREEN_H_
#include <string>

#include "OptionItem.h"
#include "stdint.h"
#include "vector"

class AnalogScreen {
 private:
  int32_t min;
  int32_t max;
  int32_t step;
  int32_t value;

  // option list
  std::vector<OptionItem> options;

 public:
  void UIAction_CloseWindow();

  void UIAction_ChangeSliderValue();

  void UIAction_OnOptionClick();

  /*
   Rendering Process:
   1. Render Header component with weather status
   2. Render a label indicating selected IO name to adjuct value.
   3. Render a button for closing expanded window for IO adjuct.
   4. Render a slider to adjust the value within the specified range and with specified step.
   5. Render the options list with clickable items.

  */
  void render();
};

#endif  // ANALOGSCREEN_H_
