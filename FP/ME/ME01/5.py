a = int(input())
b = int(input())

for i in range(a, b, 3):
    n = i
    if i**2 > (b/2)**2:
        break
    if i % 3 == 0 and i % 5 == 0:
        continue
    elif i % 2 == 0:
        for _ in range(3):
            n //= 2
    else:
        n += 1
    print(n)

# turns into :


a = int(input())
b = int(input())
i = a
while not stopped and i < b:
    stopped=False
    skipped=False
    continueing=False
    n = i
    j = 0
    if (i**2 > (b/2)**2):
        i = b
        stopped = True
    if (i % 3 == 0 and i % 5 == 0) and stopped == False:
        skipped = True
    if (i % 2 == 0 and stopped == False and skipped == False):
        continueing = True
        while j < 3:
            n //= 2
            j += 1
    if stopped == False and skipped == False and continueing == False:
        n += 1
    if stopped = False and skipped == False:
        print(n)
    i += 3
        