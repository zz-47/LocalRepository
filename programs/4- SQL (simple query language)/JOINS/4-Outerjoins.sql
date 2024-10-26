
/* 
            OUTTER join :



               // Suppose two tables,
                      

           TABLE: Users :                                                                    TABLE: likes :
                
              0- adam                                                                           5- E-sports
              
              1- john                                                                           1-Cricket
                
              2- Tommy                                                                          3-soccer
               
              3- Johnathan                                                                      1-tennis
                
              4- Mariya                                                                         2-hand ball


              // OUTT
ER join forms an intersection amd shows data as 1 table.
                   
                // OUTT
ER join exempts the uncommon .   

                // RESULT of OUTT
ER-JOIn :


                                    TABLE people's liked sport :


                      
                                  | 1- | john        |  Cricket ,tennis |                 
                                  | 2- | Tommy       |  Hand ball       |
                                  | 3- | Johnathan   |  soccer          |
                                  | 4- | Mariya      |  NULL            |
                                  | 5- | NULL        |  E-Sports        |
*/

  -- SQL code :

   SELECT *
FROM Users
FULL OUTER JOIN LIKES1       -- A LITTLE BIT DIFFERENT ,AS USED (FULL OUTER JOIN) INSTEAD OF WRITING IT WRONG AS OUTER JOIN
ON Users.Id = LIKES1.UserId