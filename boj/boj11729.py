import sys

def hanoi(N, s, e, a):

    if N <= 1:
        print(s, e)
        return 1

    count = 0
    count += hanoi(N-1, s, a, e)

    count += 1
    print(s, e)

    count += hanoi(N-1, a, e, s)

    return count


N = sys.stdin.readline().strip()
N = int(N)

print(2**N - 1)
hanoi(N, 1, 3, 2)
