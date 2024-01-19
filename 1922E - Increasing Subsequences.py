for index in range(int(input())):
    otans = []
    itnd = int(input()) - 1
    n = 1
    index = 0

    while itnd >= n:
        itnd -= n
        n *= 2
        otans.append(index)
        index += 1

    index = 10000
    while itnd != 0:
        if itnd >= (2 ** index):
            otans.append(index)
            itnd -= 2 ** index
        index -= 1

    print(len(otans))
    for index in otans:
        print(index, end=' ')
    print()
