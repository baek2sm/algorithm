if __name__ == '__main__':
    array = [0, 6, 4, 5, 1, 8, 9, 7, 3, 2]
    for i in range(10):
        min_value = 100000
        index = -1
        for j in range(i, 10):
            if min_value > array[j]:
                min_value = array[j]
                index = j
        temp = array[i]
        array[i] = array[index]
        array[index] = temp
    print(' '.join(map(lambda x: str(x), array)))