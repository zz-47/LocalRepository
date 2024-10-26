/* 
            INNER join :



               // Suppose two tables,
                      

           TABLE: Users :                                                                    TABLE: likes :
                
              0- adam                                                                           5- E-sports
              
              1- john                                                                           1-Cricket
                
              2- Tommy                                                                          3-soccer
               
              3- Johnathan                                                                      1-tennis
                
              4- Mariya                                                                         2-hand ball


              // Inner join forms an intersection amd shows data as 1 table.
                   
                // inner join exempts the uncommon .   

                // RESULT of INNER-JOIn :


                                    TABLE people's liked sport :


                      
                                  | 1- | john        |  Cricket ,tennis |                 
                                  | 2- | Tommy       |  Hand ball       |
                                  | 3- | Johnathan   |  soccer          |
*/

    -- SQL code :

   SELECT *
FROM Users
INNER JOIN LIKES1
ON Users.Id = LIKES1.UserId
