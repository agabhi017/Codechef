import numpy as np

def min_boxes(boxes, h, n) :
    boxes = np.sort(boxes)
    matrix = np.zeros((n + 1, 2*h + 1))
    for i in range(1, n + 1):
        for j in range(1, 2*h + 1) :
            if j < boxes[i - 1] :
                matrix[i][j] = 1
            else:
                num1 = matrix[i - 1][j]
                num2 = matrix[i][j - boxes[i - 1]] + 1
                matrix[i][j] = min(num1, num2)
    return matrix


if __name__ == "__main__" :
    n = int(input())
    h = int(input())
    boxes = list(map(int, input().split()))
    print(boxes)
    print(min_boxes(boxes, h, n))
    matt = min_boxes(boxes, h, n)
    print(matt[n][h])
    print(matt[n][2*h])