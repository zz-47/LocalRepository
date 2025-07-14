#  this code is a demonstration of the strategy pattern...

# Strategy class / mainly defines the interface for all payment strategies

class PaymentStrategy:
     def pay(self, amount) :
          raise NotImplementedError("Sub classes must implement this method")

# Concrete strategies

class CreditCardPay_strategy(PaymentStrategy) :
      def pay(self,amount) :
           print(f'paying {amount} $ , using Credit Card')

class PaypalPay_startegy(PaymentStrategy):
      def pay(self, amount) :
           print(f'paying {amount} $ , using Paypal Account')

# context of shopping...

class ShoppingCart :
     def __init__(self) :
           self.PaymentStrategy = PaymentStrategy  # opening a new instance of strategy class.

     def Checkout(self, amount): 
           self.PaymentStrategy.pay(amount)  # specifying the payment strategy to be used...


# credit card checkout info...

cart = CreditCardPay_strategy()
cart.pay(341.12)

print()
# Paypal checkout info...

cart = PaypalPay_startegy()
cart.pay(429.09)
