def swap_kedua():
    global x, y
    # harus dikasiin temporary variable, ya kalau tidak dikasi variable temp, logikanya malah gini:
    'x = y, yang dimana x = 20, jika ditambahkan y = x, maka akan y akan tetap 20, karena var x udah x = y, alias x = 20'
    'tapi jika temp = x, maka temp = 10, maka nanti y  = temp, yang dimana y = 10, maka terjadilah swap. ya gitulah'
    temp = x
    x = y
    y = temp


x = 10
y = 20

swap_kedua()

# nah ini baru berhasil
print('ini x = ', x)
print('ini y = ', y)