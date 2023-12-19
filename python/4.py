# Largest Palindrome Product


def largest_palindrome_product():
  max_product = 0

  for i in range(100, 1000):
    for j in range(100, 1000):
      product = i * j
      if str(product) == str(product)[::-1]:
        max_product = max(max_product, product)

  return max_product


print(largest_palindrome_product())
