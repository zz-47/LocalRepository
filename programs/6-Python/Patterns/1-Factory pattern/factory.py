#    This code is the implementation of the factory pattern...

#    creating a translator class

class FrenchTranslator :

#     creating a dictionary class...
 def __init__ (self) :
 
  self.translations= { "Good night" : "bonne nuit", "Good morning" : "Bonjour" }

#     creating a method to translate / localize...

 def translate(self, msg) :
     return self.translations.get(msg,msg)


class GermanTranslator :

#    initiallization.
  def __init__(self) :

    self.translations = { "Good night" : "Gute nacht", "Good morning": "Guten morgen"} 

#  creation of method. 
  def translate(self, msg) :

     return self.translations.get(msg, msg)  
  

class EnglishTranslator :
  
    def translate(self, msg) :
        return msg

    # this class does not need initialization of a dictionary.


# Creating a factory class...
# this step is main learning point of the factory method

def Factory(language = "English"):
   
   # fatcory method / creating a new object...

   translators = {
      
      "French" : FrenchTranslator,
      "German" : GermanTranslator,
      "English" : EnglishTranslator
   }

   # returning the new object...

   return translators[language]()

if __name__ == "__main__" :
   
   f = Factory("French")
   g = Factory("German")
   e = Factory("English")
   
#  stating a message...

   message = ["Good night", "Good morning"]

   for msg in message :
      
      print(f.translate(msg))
      
      print(g.translate(msg))

      print(e.translate(msg))
