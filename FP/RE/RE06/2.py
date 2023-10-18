def change(amount):
    change =[]
    for bills in [200, 100, 20, 10, 5, 2, 1]:
        num = amount // bills
        change += (bills,) * num
        amount -= bills * num
    return change

    