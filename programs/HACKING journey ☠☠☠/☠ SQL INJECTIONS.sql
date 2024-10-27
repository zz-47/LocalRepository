☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ 
      ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠        DISCLAIMER         ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ 

                        --      THIS INJECTION type is (IN-BAND SQL injection)

 -- web used here is altoro mutual(altoro.testfire.net/login.jsp) , which is used for demonstration of SQL injection 

                        THE THINGS MENTIONED ARE DANGEROUS AF  !!!!!!!!!!!!!!!


    SQL : SIMPLE QUERY LANGUAGE IS USED NOT ONLY FOR GENERATION OF DATABASE QUERIES BUT FOR INJECTING VIRUS 

            OR STEALING DATA FROM DATABASES THESE ARE SOME WAYS TO USE SQL INJECTION ON DATABASE

  -                                           WEBS :


    ☠ - BRUTE Force :

                     This means we,ll have to try every single password combnations and guessing the password
                                  as well as the admin name.

               .i.e 

                          USERNAME  :    admin
                          PASSWORDS :    password123     // dang it ! failed

          Query that is send : 

            SELECT * FROM users WHERE username ='admin' AND  password  ='password123'

-- shows error : Login Failed: We're sorry, but this username or password was not found in our system. Please try again      

        -- THING TO NOTICE HERE IS (admin & password123) ARE STORED IN  ( '' ) , WHICH MEANS ARE OF STRING TYPE      


     ☠ fact -  ALSO IN BRUTE FORCE WE ADD A  -- ( ' ) SINGLE QUOTE TO CHECK VULNERABILITIES.

             SO, IF WE CHANGE -- ( admin ) TO -- ( admin' ) WITH A QUOTE          


      -- IF IT SHOWS VULNERABILITIES LIKE QUERY (LANGUAGE ERROR) :

           -- .i.e      Syntax error: Encountered "password123" at line 1, column 67

    WE DID AN ERROR AS :
 
            -- SELECT * FROM users WHERE username ='admin'' AND  PAssword  ='password123'
                      // HERE ERROR EXIST            ^
                  

    fact ☠ -  THE ABOVE SYNTAX ERROR CAN HELP US SNEAK IN PAYLOADS TO SQL INJECTION.

     -- IN THE RIGHT SYNTAX AT LINE 29 SAYS THAT (admin) AND (password123) HAVE TO EXIST PARALELLY
       -- IF BOTH VALUES ARE TRUE THE LOGIN WILL BE SUCCESSFUL.

        HERE PAYLOADS COME IN ,as :

         ☠  1 - OR PAYLOAD :

                               HERE WE,LL TEMPER/CHANGE THE CODE/QUERY USING OR PAYLOAD AS 

            , I,LL CHANGE THE username TO :--   ( admin'OR '1' = '1')  


             WHICH MEANS : 


   SINCE WE HAVE CHANGED THE CODE/QUERY BY BREAKING OUT OF THE STRING TO :


       SELECT * FROM users WHERE username ='admin' OR '1'='1' AND password='password123'                                                                         

   -- THE SQL WILL PROCESS THESE ,AS FIRSTLY (AND) ,BECAUSE IT IS THE PRESIDENCE
    -- , THEN AFTER THAT IT WILL EXECUTE (OR) ,AS SECONDARY,

       /* 
           HERE HACKING MAGIC COMES ,AS WE PLAY THROUGH SYNTAX ,AS THE QUERY/CODE EXECUTES 

             1 ☠ - IT WILL ASK FIRST QUESTION FROM SYSTEM/SERVER :
                     
                      , THAT HEY ! IS (username = 'admin') AND (password=password123).

                  // AND WILL BE EXECUTED FIRST ,BECAUSE PRESIDENCY REASONS .

               AFTER ALL THAT WILL BE (FALSE)

            2 ☠ - THEN IT WILL ASK SECONDARY QUESTION FROM THE SYSTEM/SERVER :

                    THAT HEY ! IS (username='admin') OR ('1' = '1')

          // HERE '1' = '1' IS A (TRUE) STATEMENT SO IT WILL BE ALWAYS TRUE PROVIDING A PATH INTO DATABASE.

       */

   -- The password can be cracked using (username=admin'OR'1'='1) AND (password=password123) 
 

    
        ☠ 2 - ( --/comment payload) :


                                 THIS PAYLOAD IS ALMOST INDESTRUCTIBLE ,AS IN THIS TYPE OF TEPMERING 

                                    NO EXTRA THINGY IS ADDED ,BUT WE REMOVE / COMMENT OUT SOME PART

                                                         OF OUR THE QUERY.



                    // THIS ONLY REQUIRES A SPECIFICALLY EXISTING USER NAME.


                    AS, 

            --   fact ☠ - THIS PAYLOAD BEGINS SAME AS THE PREVIOUS (with an extra ' (cuot))                          


          ☠- THE SYNTAX USED IS :     

         --   SELECT * FROM USERS WHERE username=admin'-- AND pasword=password123.


            // here -- and a space will comment out all the part of query present after the username.