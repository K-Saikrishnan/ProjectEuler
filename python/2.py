# Even Fibonacci Numbers


def sum_even_fibonacci(num):
  f0, f1 = 1, 1
  total = 0

  while total < num:
    total += f0 + f1
    f0, f1 = f0 + (2 * f1), (2 * f0) + (3 * f1)

  return total


print(sum_even_fibonacci(4_000_000))
