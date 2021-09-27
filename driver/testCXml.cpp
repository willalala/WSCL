#include <iostream>

// Type
// 1 - property
// 2 - value
// 3 - Sum
// 4 - Product
// 5 - divide
// 6 - table

struct operBase {
  int32_t value;
  uint32_t type;
};

struct operSum {
  operBase base;
  operBase* oper1;
  operBase* oper2;
};

struct operProduct{
  operBase base;
  operBase* oper1;
  operBase* oper2;
};

struct operDivide{
  operBase base;
  operBase* oper1;
  operBase* oper2;
};

struct operLimit{
  operBase base;
  operBase* oper;
  int32_t max;
  int32_t min;
};

struct operTable {
  operBase base;
  operBase* operCol;
  operBase* operRow;
  uint32_t colSize;
  uint32_t rowSize;
  // Col
  // Row
  // Data
}

int main() {
  // Malloc Sim Space
  void* pSimRam = malloc(1024 * 8);

  // 


  std::cout << "Hellow, world!" << std::endl;
  return 0;
}