from xml.dom.expatbuilder import ElementInfo


num = (input("Enter a number range from 0...5"))
answer = "not in range"
if num == 0:
    answer = "Zero"
elif num == 1:
    answer = "one"
elif num == 2:
    answer = "Two"
elif num == 3:
    answer = "Three"
elif num == 4:
    answer = "Four"
elif num == 5:
    answer = "Five"
print("The numbber is : ", answer)