def rm_letter_rev_rec(ch, s):
    def rm_letter_rev_rec(ch, s):
    if (len(s)== 0):
        return ''
    if (s[-1] == ch):
        return rm_letter_rev_rec(ch, s[:-1])
    else:
        return s[-1] + rm_letter_rev_rec(ch, s[:-1])