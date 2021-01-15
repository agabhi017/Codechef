import numpy as np

def min_boxes(boxes, n, h):
    matrix = np.zeros((h + 1, h + 1), dtype = int)
    boxes = np.sort(boxes, dtype = int)
    boxes_sum = np.cumsum(boxes)
    for i in range(h + 1):
        for j in range(h + 1):
            


if __name__ == "__main__" :
    n, h = input().split()
    n = int(n)
    h = int(h)
    boxes = list(map(int, input().split()))
    print(min_boxes(boxes, n, h))