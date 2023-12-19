# Largest Prime Factor


def largest_prime_factor(num):
  factor = 2

  while factor * factor <= num:
    if num % factor:
      factor += 1
    else:
      num //= factor

  return num


print(largest_prime_factor(600851475143))
