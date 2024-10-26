/*
                                class1
                                 /\
                                /  \
                          class2    class3
                          /\             /\
                         /  \           /  \
                   class4  class5   class6  class7
*/

// Question form CBISE 2019 computer sciene paper (indian board)
  // example code (cant be run !)
   
   class ground    // lowest level of building.
   {
     int rooms;  // all types of data
      protected : 
        void put(); // protected type only gets in the rooms with validity.
       public :
         void get(); // public type can get them out of room without validity
   };

         class middle
         {
          int labs; // labs are public for every one
           public :
             void take(); // every one can take public items of lab .
             void give(); // every one can give back taken items .
         };

             class top
             {
               int roof;           // roof is accessible by every one.
                 public :
                    void In();  // people going on to roof.
                     void out(); // people comming from roof.
             };