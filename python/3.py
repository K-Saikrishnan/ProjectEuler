# Largest Prime Factor


def largest_prime_factor(num):
  factor = 2

  if num == 2:
    return 2

  if num % 2 == 0:
    num //= 2

  factor += 1
  while factor * factor <= num:
    if num % factor:
      factor += 2
    else:
      num //= factor

  return num


print(largest_prime_factor(600_851_475_143))
