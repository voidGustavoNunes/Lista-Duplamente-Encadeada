i = 15
while i < 20:
    if i % 3 == 0:
        print("AAA")
    elif i % 2 == 0:
        print("BBB")
    elif i % 5 != 0:
        print("CCC")
    elif i / 2 == 5:
        print("DDD")
    else:
        print("EEE");
    i = i + 3
