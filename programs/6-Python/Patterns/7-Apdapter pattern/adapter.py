# this code is a demonstration of the adapter pattern

class Farenheitsensor:
    def get_farenheit(self):
        return 50
    
# target interface // used to raise an error condition against the class above.    
class tempsensor :
    def get_temp(self):
        raise NotImplementedError
    
# Adapter class....

class FtoC_Adapter(tempsensor) :
    def __init__(self, farenheit_sensor):
        self.farenheit_sensor = farenheit_sensor # created an instance under the __init__

    # defining a function to get the temp in celsius
    def get_temp(self):
        farenheit = self.farenheit_sensor.get_farenheit()
        return (farenheit - 32) * 5/9   # calculating using formula  ( C = ( F - 32 ) * 5/9 )
    
# Client code / main display code...

def displaytemp(sensor : tempsensor):
        print(f'temperature in celcius is : {sensor.get_temp():.2f} C')


# providing info....

farenheit_sensor = Farenheitsensor()   # specifying the method of 1st class

adapter = FtoC_Adapter(farenheit_sensor)  # wraps orignal object in adapter

displaytemp(adapter) # displays contents

