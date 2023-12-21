# Multiples of 3 or 5


def sum_divisible_by(n, target):
  quotient = target // n
  return (n * quotient * (quotient + 1)) // 2


def sum_of_multiples_of_3_and_5(num):
  num -= 1
  return sum_divisible_by(3, num) + sum_divisible_by(5, num) - sum_divisible_by(15, num)


print(sum_of_multiples_of_3_and_5(1_000))
