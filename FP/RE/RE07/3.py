def roman_to_integer(a_string):
    roman_to_decimal = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000,
        }
    ending = 0
    for i in range (len(a_string)-1, -1, -1):
        number = roman_to_decimal[a_string[i]]
        if (3*number < ending):
            ending = ending - number
        else:
            ending = ending + number
    return ending
