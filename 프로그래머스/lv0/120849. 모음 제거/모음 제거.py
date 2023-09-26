def solution(my_string):
    remove = ['a', 'e', 'i', 'o', 'u']
    
    for char in remove:
        my_string = my_string.replace(char, '')
    
    return my_string