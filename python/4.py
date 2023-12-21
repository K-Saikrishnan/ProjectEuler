# Largest Palindrome Product


def largest_palindrome_product(num_digits):
  min_num = 10 ** (num_digits - 1)
  max_num = 10**num_digits

  max_product = 0

  for i in range(max_num, min_num, -1):
    if i % 11 == 0:
      j = max_num
      dj = 1
    else:
      j = max_num - (max_num % 11)
      dj = 11

    for j in range(max_num, i, -dj):
      product = i * j

      if product < max_product:
        break

      if str(product) == str(product)[::-1]:
        max_product = max(max_product, product)
  return max_product


print(largest_palindrome_product(3))
