# Multiples of 3 or 5


def sum_of_multiples_of_3_and_5(num):
  return sum(i for i in range(num) if i % 3 == 0 or i % 5 == 0)


print(sum_of_multiples_of_3_and_5(1_000))
