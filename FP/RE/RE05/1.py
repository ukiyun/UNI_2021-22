def rm_letter_rev(ch, s):
    remover = s.replace(ch, '')
    reverse = remover[::-1]
    return reverse