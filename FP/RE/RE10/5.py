def odd_range(start, stop, step):
    candidate = start
    while candidate < stop:
        if (candidate %2 != 0):
            yield candidate
            candidate += step * 2 - 2
        candidate += 1