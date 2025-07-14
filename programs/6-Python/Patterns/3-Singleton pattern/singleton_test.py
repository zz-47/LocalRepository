#      this code demonstrates the Singleton pattern


class Singleton :

#   private variable
    _shared_instance = 'Geeks for Geeks'

    @staticmethod 

    def getInstance() :

    # using Static method for global access to the instance

     if Singleton._shared_instance == 'Geeks for Geeks' :
        Singleton()
     return Singleton._shared_instance

    def __init__(self) :

    # using a virtual private contructor to raise exception against above static method.

     if Singleton._shared_instance != 'Geeks for Geeks' :
        raise Exception("This is a Singleton class !")
     else :
        Singleton._shared_instance = self 
        #  stores the current object (self) as the one and only instance of the Singleton class.

if __name__ == '__main__' :

    # creating the object 

     obj = Singleton()
     print(obj)

     # picking the instance of the class

     obj = Singleton.getInstance()
     print(obj)
   

