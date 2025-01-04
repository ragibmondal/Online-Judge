import sys
from collections import deque

def compute_max_min_difference(a, n):
    max_diff = [0] * (n + 1)

    for k in range(1, n + 1):
        max_dq = deque()
        min_dq = deque()
        max_val = -float('inf')
        min_val = float('inf')

        for i in range(n):
        
            while max_dq and a[i] >= a[max_dq[-1]]:
                max_dq.pop()
            max_dq.append(i)
            if max_dq[0] <= i - k:
                max_dq.popleft()

            while min_dq and a[i] <= a[min_dq[-1]]:
                min_dq.pop()
            min_dq.append(i)
            if min_dq[0] <= i - k:
                min_dq.popleft()

            if i >= k - 1:
                max_val = a[max_dq[0]]
                min_val = a[min_dq[0]]
                max_diff[k] = max(max_diff[k], max_val - min_val)

    return max_diff

def main():
    input = sys.stdin.read
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1

    for _ in range(t):
        n = int(data[idx])
        q = int(data[idx + 1])
        idx += 2

        a = list(map(int, data[idx:idx + n]))
        idx += n

        max_diff = compute_max_min_difference(a, n)


        convenience = [0] * (n + 1)
        for k in range(1, n + 1):
            convenience[k] = max_diff[k] - (k - 1)


        max_convenience = max(convenience[1:])
        print(max_convenience)

        for __ in range(q):
            p = int(data[idx])
            x = int(data[idx + 1])
            idx += 2


            a[p - 1] = x

            max_diff = compute_max_min_difference(a, n)

            for k in range(1, n + 1):
                convenience[k] = max_diff[k] - (k - 1)

            max_convenience = max(convenience[1:])
            print(max_convenience)

if __name__ == "__main__":
    main()