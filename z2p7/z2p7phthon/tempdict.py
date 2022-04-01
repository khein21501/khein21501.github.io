temps = {'Osolo':13,'London':14.7,'Paris':15.2}
print(type(temps))
print(temps['London'])
print(temps['Osolo'])
print(temps.keys())
print(temps.values())
for key in temps:
    print(key,temps[key])
mydict = dict()
mydict['key1']='Yangon'
mydict['key2']='Mandalay'
print(mydict)

for city in sorted(temps):
    print(city,temps[city])
