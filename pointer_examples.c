#include <stdlib.h>

int pointer_manipulation(int *base_ptr) {
  int *local_ptr_1;
  int *local_ptr_2;

  // create a local alias to our base ptr
  local_ptr_1 = base_ptr;

  // offset 10 into our base pointer
  local_ptr_1 += 10;

  // is base_ptr[10] == 20?
  if (*local_ptr_1 == 20) {
    return 1;
  }

  // create another alias
  local_ptr_2 = base_ptr;

  // offset 5 into the base pointer
  local_ptr_2 += 5;

  // is base_ptr[5] == 33?
  if (*local_ptr_2 == 33) {
    return 2;
  }

  // update base pointer
  ++base_ptr;

  // is base_ptr[1] == -1?
  if (*base_ptr == -1) {
    return 2;
  }

  // modify one of our aliases
  --local_ptr_2;

  // is base_ptr[4] == 4?
  if (*local_ptr_2 == 4) {
    return 3;
  }

  return 0;
}

int pointer_aliasing_change_value(int param_1, int param_2) {

  // set our first parameter to be zero
  param_1 = 0;

  // create an alias to it
  int *local_ptr = &param_1;

  // reassign via the alias
  *local_ptr = param_2;

  // after the aliases, this should find param_2 == 10
  if (param_1 == 10) {
    return 1;
  }

  return 0;
}

int pointer_aliasing_null(int *ptr) {
  int *ptr_alias_1;
  int *ptr_alias_2;

  // create some pointer aliases
  ptr_alias_1 = ptr;
  ptr_alias_2 = ptr_alias_1;

  // after the aliases, is the input pointer NULL?
  if (ptr_alias_2 == NULL) {
    return 1;
  }

  return 0;
}

int pointer_arithmetic_offset(int *base_ptr, int offset) {

  // move offset distance into our pointer
  base_ptr += offset;

  // does our pointer now equal our offset?
  if (*base_ptr == offset) {
    return 1;
  }

  return 0;
}
