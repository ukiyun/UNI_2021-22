import random

def cows_bulls(seed_value):
    random.seed(seed_value)
    correct = format(random.randint(0000,9999), '04d')

    def check(guess):
        cows, bulls = 0, 0
        correc, guess = str(correct), str(guess)
        for i, digit in enumerate(correc):
            if digit == guess[i]:
                cows += 1
            if digit in guess:
                bulls += 1
        return (cows, bulls - cows)

    return check