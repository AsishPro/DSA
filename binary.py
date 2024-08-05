def get_binary_using_bin(num):
  """Converts a decimal integer to its binary string representation using bin()."""
  binary_str = bin(num)
  return binary_str[2:]  # Remove the '0b' prefix

number = 10
binary_representation = get_binary_using_bin(number)
print(f"{number}")
