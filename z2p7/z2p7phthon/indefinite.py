print("Enter number to display and 99 to exit : ")
done = False
while not done:
    entry= int(input('Enter number : '))
    if entry == 999:
        done = True
    else:
        print(entry)