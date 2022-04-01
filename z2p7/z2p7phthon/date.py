from time import time


class Date:
    def get_date(self):
        return '30-3-2022'
class Time(Date):
    def get_time(self):
        return '18:44'
dt =Date()
print("Call date method from date obj",dt.get_date())
tm=Time()
print("Call time method from time obj",tm.get_time())
print("Call date method from time obj",tm.get_date())