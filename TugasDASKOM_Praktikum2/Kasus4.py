a = 1
b = 4
print("nilai variabel a yang pertama :", a)
print("nilai variabel b yang pertama :", b, "\n")

b = a + 1
a -= b
print("nilai variabel a yang kedua : " + str(a))
print("nilai variabel b yang kedua :", b, "\n")

a = b + 2
b = a * b
print("nilai variabel a yang ketiga : {}".format(a))
print("nilai variabel b yang ketiga : %f" %(b), "\n")

c = a
a = b
b = c
print("nilai variabel a yang keempat : {}".format(a))
print("nilai variabel b yang keempat : {}".format(b))
print("nilai variabel c yang pertama : {}".format(c))