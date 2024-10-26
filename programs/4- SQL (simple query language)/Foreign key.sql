  --    sql query to show relations b/w two tables with common datatype using a FOREIGN KEY.

       
        
       -- creating main TABLE 1  
        
        CREATE TABLE Prices(

            priceId INT NOT NULL,
            
              ITEMprice INT NOT NULL,   -- Used as FOREGIN KEY

                TOTALitems INT NOT NULL,

                  PRIMARY KEY(priceId),
                   
                    FOREIGN KEY(ITEMprice) -- FOREGINKEY INSIDE 1st TABLE
          );
        

         -- creating SECONDARY TABLE 2

        CREATE TABLE ITEMS(

          ITEMnumber INT NOT NULL,

           ITEMname VARCHAR(30) NOT NULL,

             ITEMprice INT,     -- VALUE PRE DEFINED IN 1st TABLE .

               PRIMARY KEY(ITEMnumber),

                  prices(ITEMprice); -- FOREIGN KEY IN USE.       

                    -- FOREGINKEY TO CONNECTED WITH TABLE 2.  
        );