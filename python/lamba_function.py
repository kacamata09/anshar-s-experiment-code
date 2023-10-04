# filter list
numbers = [10, 30 , 40, 32, 45, 29, 43, 48, 25, 40]

even_numbers = list(filter(lambda x : x > 30, numbers ))

print(even_numbers)


# anonymous function
print_x = lambda x : print(x)
print(100)

sum_1 = lambda x, y : x + y
print(sum_1(1, 4))

cek_number = lambda x, list_numbers: 'ada' if x in list_numbers else 'no ada'
print(cek_number(24, numbers))

print(3**2)

# mapping
new_numbers = list(map(lambda x: (x, x**2), numbers))
print(new_numbers)

new_number_2 = list(map(lambda x: x-20, numbers))
new_number_2.sort(reverse=True)
# sorted(new_number_2)
print(new_number_2)