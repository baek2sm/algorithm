if __name__ == '__main__':
    array = [0, 6, 4, 5, 1, 8, 9, 7, 3, 2]
    for i in range(1, 10):
        j = i
        while array[j-1] > array[j]:
            array[j], array[j-1]= array[j-1], array[j]
            j -= 1
    print(' '.join(map(lambda x: str(x), array)));   
