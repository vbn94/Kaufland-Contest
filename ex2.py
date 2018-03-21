import math

text = input('')
tarr = text.split(',')
r1 = int(tarr[0]) / 10
h1 = int(tarr[1]) / 10
r2 = int(tarr[2]) / 10
h2 = int(tarr[3]) / 10

v1 = math.pi * (r1 ** 2) * h1
v2 = math.pi * (r2 ** 2) * h2

epsilon = 0.001
if math.fabs(v1 - v2) < epsilon:
    print('V1 = V2 = %.2f' % v1)
elif v1 > v2:
    print('V1 = %.2f' % v1)
else:
    print('V2 = %.2f' % v2)
