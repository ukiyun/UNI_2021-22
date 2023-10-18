number_to_letter = lambda n: chr(ord("A") + n)
letter_to_number = lambda a: ord(a) - ord("A")

def test_around(matrix, word, pos):
    if len(word) > 0:
        row, col = letter_to_number(pos[0]), int(pos[1]) - 1
        
        lookup = [
            number_to_letter(row - 1) + str(col + 1) if row - 1 >= 0 else 0,
            number_to_letter(row + 1) + str(col + 1) if row + 1 <= 5 else 0,
            number_to_letter(row) + str(col + 2) if col + 2 <= 6 else 0,
            number_to_letter(row) + str(col) if col >= 1 else 0
        ]
        
        letters = [
            matrix[row - 1][col] if row - 1 >= 0 else None,
            matrix[row + 1][col] if row + 1 <= 5 else None,
            matrix[row][col + 1] if col + 1 <= 5 else None,
            matrix[row][col - 1] if col - 1 >= 0 else None
        ]
        
        for n, i in enumerate(letters):
            if i == word[0]:
                return test_around(matrix, word[1:], lookup[n])
    else:
        return True

def soup(matrix, word):
    ret_string = ""
    for n, i in enumerate(matrix):
        for m, j in enumerate(i):
            if j == word[0]:
                position = number_to_letter(n) + str(m + 1)
                if test_around(matrix, word[1:], position):
                    return position



'''rever'''