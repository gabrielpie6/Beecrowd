n = int(input())
A = B = C = D = []

for k in range(1, n + 1):
    A = list(map(float, input().split(" ")))
    C = list(map(float, input().split(" ")))
    B = list(map(float, input().split(" ")))
    D = list(map(float, input().split(" ")))

    x1 = (A[0] + B[0]) / 2
    x2 = (C[0] + D[0]) / 2
    y1 = (A[1] + B[1]) / 2
    y2 = (C[1] + D[1]) / 2

    if (B[1] - A[1] == 0):
        beta = ((D[0] - C[0]) / (D[1] - C[1]))
        X = x1
        Y = beta * (x2 - X) + y2
    else:
        alfa = ((B[0] - A[0]) / (B[1] - A[1]))
        if (D[1] - C[1] == 0):
            X = x2
        else:
            beta = ((D[0] - C[0]) / (D[1] - C[1]))
            X = ((beta * x2 - alfa * x1 + y2 - y1) / (beta - alfa))
        Y = alfa * (x1 - X) + y1
    print("Caso #%d: %.2f %.2f" % (k, X, Y))