from xml.dom.pulldom import default_bufsize


class Persson:
    def __init__(self,name,office =None,mobile=None,email=None,private=None):
        self.name = name
        self.office=office
        self.mobile=mobile
        self.private =private
        self.email = email
    def add_mobile_phone(self,mobile):
        self.mobile=mobile
    def add_office_phone(self,office):
        self.office=office
    def add_private_phone(self,private):
        self.private = private
    def add_email(self,address):
        self.email=address
    
    def dump(self):
        s = self.name + '\n'
        if self.mobile is not None:
            s += 'Mobile Phone'+ self.mobile +'\n'
        if self.office is not None:
            s += 'Office Phone: '+self.office + '\n'
        if self.email is not None:
            s += 'Email :' + self.email
        print(s)
    def __str__(self):
        return self.name+' \n Phone:    '+self.mobile
p1 = Persson('Mg Mg','0923445556')
p1.add_mobile_phone('09960612577')
p1.add_office_phone('09960612577')
p1.add_private_phone('0912432535')
print(p1.__dict__)
p1.dump()
print(p1)