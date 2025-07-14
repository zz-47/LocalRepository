#  This code is a demonstration of the Facade pattern...

#  Sub system classes :

class CPU :
    def start(self):
        print("CPU started working...")
        print()

class MEMORY :
    def cache(self):
        print("loading L1 cache....")
        print("loading L2 cache.....")
        print("Loading L3 cache......")
        print()

    def memory(self):
        print("Loading main memory...")
        print()

class DISK :
    def read(self):
        print("Reading from disk C ...")        

# creating a facade class :

class Computer :

#  Defining instances...

    def __init__(self):
        self.cpu = CPU()
        self.memory = MEMORY()
        self.disks = DISK()

# calling methods using above instances...

    def start_computer(self):
        self.cpu.start()
        self.memory.cache()
        self.memory.memory()
        self.disks.read()

        print()
        print("... Computer started ...")  
     
# calling functions..

computer = Computer()

# calling the facade funcitions...

computer.start_computer()
