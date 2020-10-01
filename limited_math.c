#include <errno.h>
#include <stdint.h>
#include <stdlib.h>

#define ESUCCESS 0

#define TINY_MIN_LIMIT 0
#define TINY_MAX_LIMIT 10

int limited_reset(uint32_t *out) {
  if (out == NULL) {
    return EFAULT;
  }

  *out = TINY_MIN_LIMIT;

  return ESUCCESS;
}

int limited_increment(uint32_t in, uint32_t *out) {
  if (in > TINY_MAX_LIMIT) {
    return EPERM;
  }

  if (out == NULL) {
    return EFAULT;
  }

  *out = in + 1;

  return ESUCCESS;
}

int limited_decrement(uint32_t in, uint32_t *out) {
  if (in > TINY_MAX_LIMIT) {
    return EPERM;
  }

  if (out == NULL) {
    return EFAULT;
  }

  *out = in - 1;

  return ESUCCESS;
}

int limited_add(uint32_t in1, uint32_t in2, uint32_t *out) {
  if (in1 > TINY_MAX_LIMIT) {
    return EPERM;
  }

  if (in2 > TINY_MAX_LIMIT) {
    return EPERM;
  }

  if (out == NULL) {
    return EFAULT;
  }

  *out = in1 + in2;

  if (*out > TINY_MAX_LIMIT) {
    return EFAULT;
  }

  return ESUCCESS;
}

int limited_subtract(uint32_t in1, uint32_t in2, uint32_t *out) {
  if (in1 > TINY_MAX_LIMIT) {
    return EPERM;
  }

  if (in2 > TINY_MAX_LIMIT) {
    return EPERM;
  }

  if (out == NULL) {
    return EFAULT;
  }

  *out = in1 - in2;

  if (*out > TINY_MAX_LIMIT) {
    return EFAULT;
  }

  return ESUCCESS;
}

// EOF
