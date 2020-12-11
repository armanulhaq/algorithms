def chunk(array, n):
    result = []
    length = len(array)
    for i in range(0, length):
        res = []
        for j in range(0, n):
            index = i * n + j
            if index < length:
                res.append(array[index])
        if len(res) > 0:
            result.append(res)
    return result

final_result = chunk([*range(1, 50)], 3)
print(final_result)
