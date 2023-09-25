'''penggunaan id() ini tidak langsung memberi memory address seperti di C/C++, 
tapi ya python memberi nya id yg unique yang mungkin diambil dari mem address'''

a = 100
b = a

print(id(a))
print(id(b))

'jika seperti diatas, ternyata memori address nya sama'
'tapi jika variable b nya kita assign sebuah nilai, maka b akan memiliki memori address sendiri'
'dan tidak mengubah nilai a nya, seperti'

b = 10
print('mem addres baru b = ', id(b))
print('nilai baru b = ', b)
print('nilai a jadi tetap = ', a)


# experiment kedua
print('\nexperiment kedua')

c = 200
d = c
print('mem address c = ',id(c))
print('mem address d = ',id(d))

print('nilai c = ',id(c))
print('nilai d = ',id(d))

c = 150

'dalam kasus ini, alih alih mem address d yang berubah, teryata variable c yang mem address nya berubah'
print('\nmem address c = ',id(c))
print('mem address d = ',id(d))
print('\nnilai baru c = ',c)
print('nilai baru d = ',d)

