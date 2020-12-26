def quick_sort(array, start, end):
    if start >= end:
        return

    pivot = start
    f = start + 1 # forward, bigger value
    b = end # backward, smaller value
    
    while f <= b:
        while f <= end and array[f] <= array[pivot]:
            f += 1
        while b > start and array[b] >= array[pivot]:
            b -= 1
        if f > b:
            array[pivot], array[b] = array[b], array[pivot]
        else:
            array[f], array[b] = array[b], array[f]
    
    quick_sort(array, start, b-1)
    quick_sort(array, b+1, end)

if __name__ == '__main__':
    array = [0, 6, 4, 5, 1, 8, 9, 7, 3, 2]
    quick_sort(array, 0, 9)
    print(' '.join(map(lambda x: str(x), array)))
