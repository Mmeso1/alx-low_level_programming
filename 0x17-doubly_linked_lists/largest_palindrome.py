#!/usr/bin/python3

def is_palindrome(str):
    if str == str[::-1]

def find_largest_palindrome():
    largest_palindrome = 0

    for i in range(100, 1000):
        for j in range (100, 1000):
            product = i * j
            if is_palindrome(str(product)) and product > largest_palindrome:
                largest_palindrome = product
            return largest_palindrome

result = find_largest_palindrome()

with open("102-result", "w") as file:
    file.write(str(result))
