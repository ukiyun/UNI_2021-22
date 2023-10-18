def is_armstrong(n):
    first = (n//100)**3
    second = ((n%100)//10) ** 3
    third = (n%10)**3
    return ((first+second+third)==n)
    
print (is_armstrong(153))