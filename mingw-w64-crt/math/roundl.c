/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */
#include <math.h>

long double
roundl (long double x)
{
  long double res = 0.0L;
  if (x >= 0.0L)
    {
      res = ceill (x);
      if (res - x > 0.5L)
	res -= 1.0L;
    }
  else
    {
      res = ceill (-x);
      if (res + x > 0.5L)
	res -= 1.0L;
      res = -res;
    }
  return res;
}
