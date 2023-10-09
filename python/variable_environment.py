x = 10

def add():
    x = 5
    x += 3
    print(x)

add()
print(x)

# 

y = 100

def add_y():
    global y
    y = 5
    y += 400
    print(y)

add_y()
print(y)