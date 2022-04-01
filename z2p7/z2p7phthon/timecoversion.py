second = int(input('Enter seconds to calculate hr:min:sec :'))
hr = second//3600
second = second%3600
min = second//60
sec = second%60
print(hr,' : ',min,' : ',sec)