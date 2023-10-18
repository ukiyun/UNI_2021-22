import string
def camel_case(phrase):
    phrase = phrase.title()
    phrase = phrase[0].lower() + phrase[1:]
    phrase_sans_punct =''
    for letter in phrase:
        if letter not in (string.punctuation):
            phrase_sans_punct += letter
    space_remover = phrase_sans_punct.replace(' ', '')
    return space_remover

