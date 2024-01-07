import sys

def print_star(N):
    if N == 1:
        return['*']

    stars = print_star(N//3)
    arr = []

    for s in stars:
        arr.append(s*3)
    for s in stars:
        arr.append(s + ' '*(N//3) + s)
    for s in stars:
        arr.append(s*3)

    return arr

N = sys.stdin.readline().strip()
N = int(N)

print('\n'.join(print_star(N)))

