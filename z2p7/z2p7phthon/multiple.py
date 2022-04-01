


def multiple():
    operation = "SUM"
    total = 10 +20 
    return [operation, total]
result = multiple()
print (type(result))
print (result)
operation,total = multiple()
print(operation,total)

def multiple2():
    values = dict()
    values["operation"] = "Sum"
    values["total"] = 10 + 20
    return values
result = multiple2()
print(type(result))
print(result)
operation = result['operation']
total = result["total"]
print(operation,total)