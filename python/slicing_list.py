list1 = [1, 2, 3, 4, 5, 6]

slice_list1 = list1[2:5]
print(slice_list1)

list1[3] = 'Change'
slice_list1[1] = 'Sliceeee'

'''saat inisiasi variable slice_list1, variable ini sudah menjadi list baru yang dimana datanya 
tak akan terganggu jika sumber datanya diubah'''

print(list1)
print(slice_list1)
