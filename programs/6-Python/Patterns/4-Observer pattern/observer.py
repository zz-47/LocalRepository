# this code demonstrates the observer pattern...


# observer interface class

class subscriber :
    def update(self, video_title): pass

# Youtube channel class

class youtubeChannel :
    
    def __init__(self):
        self.subscribers = []  # used to track traffic with subscription
 
    def subs(self, subscriber):
        self.subscribers.append(subscriber)  # used to store the subscription
        print(f'{subscriber.name} subscribed to the channel :) ')
        print()

    def unsub(self, subscriber):
        self.subscribers.remove(subscriber) # used to remove the subscription
        print(f'{subscriber.name} unsubscribed from the channel :( ')
        print()
    def  notify(self, title):

         for sub in self.subscribers :
             
             sub.update(title)  # used to update title...

    def  update(self, title):

          print(f'Uploaded the title : {title}')
          print()

          self.notify(title) # used to call the notification method...

# concrete user / viewer...
class user(subscriber) :
    def __init__(self, name):
        self.name = name 

    def update(self, title):
         print(f'The Subscriber {self.name} , was notified of the video {title}')
         print()

# info...

channel = youtubeChannel()  # creating a title usung this...
u1,u2 = user('Zeeshan'),user('Ahmad')

channel.subs(u1) # zeeshan subscribes

channel.subs(u2) # ahmad subscribes

channel.update('GTA 6 , Launch Trailer !')

channel.unsub(u1) # zeeshan unsubscribes

channel.subs(u1) # zeeshan subscribes again...

            




