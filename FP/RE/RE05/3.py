def mask_data(data, n_characters, position):
    if (n_characters == 0):
        return data
    lenght = len(data)
    if (n_characters > lenght):
        return ('*' * lenght)
    replacement = '*' * n_characters
    if (position == 'begin'):
        data = data [(n_characters):]
        data = replacement + data
    if (position == 'end'):
        data = data [0:(lenght - n_characters)]
        data = data + replacement
        
    return data
