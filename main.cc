#include <iostream>
#include "./shopping.h"

int main(int argc, char* argv[]) {
  Goods goods1;
  Goods goods2;
  Goods goods3;
  Shopping shoppingList;

  goods1.SetGoodsInfo(2, 3000); //index 2, 3000원
  goods2.SetGoodsInfo(1, 5000); // index 1, 5000원
  goods3.SetGoodsInfo(3, 1000); // index 3, 1000원

  shoppingList.PushList(goods1);
  shoppingList.PushList(goods2);
  shoppingList.PushList(goods3);

  shoppingList.PrintList();

  shoppingList.SortByPrice();

  shoppingList.PrintList();

  shoppingList.SortByIndex();

  shoppingList.PrintList();

  return 0;
}
