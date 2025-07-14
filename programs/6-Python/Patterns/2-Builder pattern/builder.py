#        This code is for Builder pattern.

#  creating an abstract class...

class Majors :

    #   initiallizing object...
       
    def __init__(self):
            
            self.fee()
            self.availablebatches()
   
    # configuring the feilds of object to null/ error by using raise exception...

       
    def fee(self):
            # creating an controlled error
            raise NotImplementedError
      
    def availablebatches(self):
            raise NotImplementedError
    
    def __repr__(self):
        return 'Majors: {0.majors} | Available Batches : {0.batches}'.format(self)
    

#   Concrete classes...

class ComputerScience(Majors) :

        def fee(self):  
          self.fee = 120000
        
        def availablebatches(self):
          self.avabatches = 15

        def __str__(self):
             return 'ComputerScience'


class Chemistry(Majors) :

            def fee(self):
                self.fee = 350000 
            
            def availablebatches(self):
                 self.batches = 9

            def __str__(self):
                 return 'Chemistry'


class Maths(Majors) :
        
        def fee(self) :
             self.fee = 90000

        def availablebatches(self) :
            self.batches = 5

        def __str__(self) :
             return 'Maths'    

#  Comlplex courses...

class ComplexCourses :
         
         def __repr__(self):
             
             return 'Fee : {0.fee} | Available Batches : {0.batches}'.format(self)
         
class Complexcourse(ComplexCourses):
         
        def fee(self) :
               self.fee = 250000

        def availablebatches(self) :
                 self.batches = 4

#  Course Builder ....

def construct_course(cls) :
         
         course = cls()
         course.fee()
         course.availablebatches()

         return course
    
  
if __name__ == '__main__' :
     
     # creating new objects...

     CS = ComputerScience()
     Chem = Chemistry()
     MATHs = Maths()

     Complex_course = construct_course(Complexcourse)

print(CS)
print(Chem)
print(MATHs)
print(Complex_course)

         
                     

                          


