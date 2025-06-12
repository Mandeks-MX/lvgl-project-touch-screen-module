#ifndef ORDERSCREEN_H_
#define ORDERSCREEN_H_
#include <vector>

#include "OrderItem.h"
#include "ProductItem.h"

class OrderScreen {
 private:
  std::vector<ProductItem> products;
  std::vector<OrderItem> orders;

 public:
  void UIAction_Quantity();
  // increment or decrement Order Item quantity
  void UIAction_FinishOrder();

  void UIAction_ReturnToDeviceGroup();
  /*
   Rendering Process:
   1. Render Header component with weather status
   2. Render a label indicating the items to order, and button to return on Device Group Screen.
   3. Ensure each item in the products list is rendered and clickable to toggle its selected/unselected status for ordering and quantity displayed with value of 1 when ticked, add product in order list when ticked and remove when unitcked.
   4. Implement that the current selected product, tracked using a dedicated variable in order list, can have its quantity increased or decreased
   5. Implement vertical scrolling functionality for the products list to accommodate screens with many products.
   6. Render the footer with an option to finish order list with unique item quantity
   */
  void render();
};

#endif  // ORDERSCREEN_H_
