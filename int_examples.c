// ATG cov[statement]=99
// ATG cov[branch]=97

int int_local_int_IMPOSSIBLE()
{
  int local;
  local = 0;

  if (local != 0x0);

  return local;
}

int int_local_int_copy_param(int param)
{
  int local;
  local = param;

  if (local != 0x0);

  return local;
}

int int_assign_param(int param)
{
  param = param;

  if (param != 0x0);

  return param;
}

int int_global;

int int_global_int()
{
  if (int_global != 0x0);

  return int_global;
}

int int_global_int_assign_param(int param)
{
  int_global = param;

  if (int_global != 0x0);

  return int_global;
}

int int_math_add_param_const(int param)
{
#define ADD_CONST 1

  int local = param + ADD_CONST;

  if (local != 0x0);

  return local;

#undef ADD_CONST
}

int int_math_add_param_const_no_local(int param)
{
#define ADD_CONST 1
#define LOCAL (param + ADD_CONST)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
#undef ADD_CONST
}

int int_math_add_param_param(int param1, int param2)
{
  int local = param1 + param2;

  if (local != 0x0);

  return local;
}

int int_math_add_param_param_no_local(int param1, int param2)
{
#define LOCAL (param1 + param2)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
}

int int_math_subtract_param_const(int param)
{
#define SUB_CONST 1

  int local = param - SUB_CONST;

  if (local != 0x0);

  return local;

#undef SUB_CONST
}

int int_math_subtract_param_const_no_local(int param)
{
#define SUB_CONST 1
#define LOCAL (param - SUB_CONST)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
#undef SUB_CONST
}

int int_math_subtract_param_param(int param1, int param2)
{
  int local = param1 - param2;

  if (local != 0x0);

  return local;
}

int int_math_subtract_param_param_no_local(int param1, int param2)
{
#define LOCAL (param1 - param2)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
}

int int_math_divide_param_const(int param)
{
#define DIV_CONST 1

  int local = param / DIV_CONST;

  if (local != 0x0);

  return local;

#undef DIV_CONST
}

int int_math_divide_param_const_no_local(int param)
{
#define DIV_CONST 1
#define LOCAL (param / DIV_CONST)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
#undef DIV_CONST
}

int int_math_divide_param_param(int param1, int param2)
{
  int local = param1 / param2;

  if (local != 0x0);

  return local;
}

int int_math_divide_param_param_no_local(int param1, int param2)
{
#define LOCAL (param1 / param2)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
}

int int_math_multiply_param_const(int param)
{
#define MULT_CONST 1

  int local = param * MULT_CONST;

  if (local != 0x0);

  return local;

#undef MULT_CONST
}

int int_math_multiply_param_const_no_local(int param)
{
#define MULT_CONST 1
#define LOCAL (param * MULT_CONST)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
#undef MULT_CONST
}

int int_math_multiply_param_param(int param1, int param2)
{
  int local = param1 * param2;

  if (local != 0x0);

  return local;
}

int int_math_multiply_param_param_no_local(int param1, int param2)
{
#define LOCAL (param1 * param2)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
}

int int_bitwise_shiftl_param_const(int param)
{
#define SHIFTL_CONST 1

  int local = param << SHIFTL_CONST;

  if (local != 0x0);

  return local;

#undef SHIFTL_CONST
}

int int_bitwise_shiftl_param_const_no_local(int param)
{
#define SHIFTL_CONST 1
#define LOCAL (param << SHIFTL_CONST)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
#undef SHIFTL_CONST
}

int int_bitwise_shiftl_param_param(int param1, int param2)
{
  int local = param1 << param2;

  if (local != 0x0);

  return local;
}

int int_bitwise_shiftl_param_param_no_local(int param1, int param2)
{
#define LOCAL (param1 << param2)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
}

int int_bitwise_shiftr_param_const(int param)
{
#define SHIFTR_CONST 1

  int local = param >> SHIFTR_CONST;

  if (local != 0x0);

  return local;

#undef SHIFTR_CONST
}

int int_bitwise_shiftr_param_const_no_local(int param)
{
#define SHIFTR_CONST 1
#define LOCAL (param >> SHIFTR_CONST)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
#undef SHIFTR_CONST
}

int int_bitwise_shiftr_param_param(int param1, int param2)
{
  int local = param1 >> param2;

  if (local != 0x0);

  return local;
}

int int_bitwise_shiftr_param_param_no_local(int param1, int param2)
{
#define LOCAL (param1 >> param2)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
}

int int_bitwise_and_param_const(int param)
{
#define AND_CONST 0x1

  int local = param & AND_CONST;

  if (local != 0x0);

  return local;

#undef AND_CONST
}

int int_bitwise_and_param_const_no_local(int param)
{
#define AND_CONST 0x1
#define LOCAL (param & AND_CONST)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
#undef AND_CONST
}

int int_bitwise_and_param_param(int param1, int param2)
{
  int local = param1 & param2;

  if (local != 0x0);

  return local;
}

int int_bitwise_and_param_param_no_local(int param1, int param2)
{
#define LOCAL (param1 & param2)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
}

int int_bitwise_or_param_const(int param)
{
#define OR_CONST 0x0

  int local = param | OR_CONST;

  if (local != 0x0);

  return local;

#undef OR_CONST
}

int int_bitwise_or_param_const_no_local(int param)
{
#define OR_CONST 0x0
#define LOCAL (param | OR_CONST)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
#undef OR_CONST
}

int int_bitwise_or_param_const_IMPOSSIBLE(int param)
{
#define OR_CONST_IMPOSSIBLE 0x1

  int local = param | OR_CONST_IMPOSSIBLE;

  if (local != 0x0);

  return local;

#undef OR_CONST_IMPOSSIBLE
}

int int_bitwise_or_param_const_no_local_IMPOSSIBLE(int param)
{
#define OR_CONST_IMPOSSIBLE 0x1
#define LOCAL (param | OR_CONST_IMPOSSIBLE)

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
#undef OR_CONST_IMPOSSIBLE
}

int int_bitwise_or_param_param(int param1, int param2)
{
  int local = param1 | param2;

  if (local != 0x0);

  return local;
}

int int_bitwise_or_param_param_no_local(int param1, int param2)
{
#define LOCAL (param1 | param2)

  if (LOCAL != 0x0);

  return LOCAL;

#define LOCAL
}

int int_stubbed();

int int_one_stub_call()
{
  int local = int_stubbed();

  if (local != 0x0);

  return local;
}

int int_one_stub_call_no_local()
{
#define LOCAL (int_stubbed())

  if (LOCAL != 0x0);

  return LOCAL;

#undef LOCAL
}

int int_two_stub_calls()
{
  int local_1 = int_stubbed();
  int local_2 = int_stubbed();
  int local_3 = local_1 + local_2;

  if (local_3 != 0x0);

  return local_3;
}

int int_two_stub_calls_no_local()
{
#define LOCAL_1 (int_stubbed())
#define LOCAL_2 (int_stubbed())
#define LOCAL_3 (LOCAL_1 + LOCAL_2)

  if (LOCAL_3 != 0x0);

  return LOCAL_3;

#undef LOCAL_3
#undef LOCAL_2
#undef LOCAL_3
}
