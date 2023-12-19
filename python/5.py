# Smallest Multiple

import math


def smallest_multiple(num):
  return math.lcm(*range(1, num + 1))


print(smallest_multiple(20))
