if __name__ == '__main__':
    array = [0, 6, 4, 5, 1, 8, 9, 7, 3, 2]
    for i in range(10):
        for j in range(9-i):
            if array[j] > array[j+1]:
                temp = array[j]
                array[j] = array[j+1]
                array[j+1] = temp
    print(' '.join(map(lambda x: str(x), array)))