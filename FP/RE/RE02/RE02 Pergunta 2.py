n = int(input("Write a positive 3 digit number: "))
last_digit = n % 10
middle_digit = (n // 10) % 10
first_digit = (n // 100)
print(last_digit)
print(middle_digit)
print(first_digit)