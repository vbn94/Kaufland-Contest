beers = 200
wines = 300
winesD = 0
winesO = 0
beersD = 0
beersO = 0

while True:
    text = input('')
    if text == 'END':
        break

    t = text.split(': ')
    if t[0] == 'Beers':
        beers += int(t[1])
        if int(t[1]) > 0:
            beersD += 1
        else:
            beersO += 1
    elif t[0] == 'Wines':
        wines += int(t[1])
        if int(t[1]) > 0:
            winesD += 1
        else:
            winesO += 1

print('Wines: ', wines)
print('Deliveries: ', winesD)
print('Orders: ', winesO)
print('Beers: ', beers)
print('Deliveries: ', beersD)
print('Orders: ', beersO)
