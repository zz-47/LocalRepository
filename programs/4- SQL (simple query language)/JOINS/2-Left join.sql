 /* 
 
               LEFT join :

                  
                   this type of join includes everything from left table .


               // supposed Tables ,


           TABLE: Users :                                                                    TABLE: likes :

              0- adam                                                                           5- E-spots

              1- john                                                                           1-Cricket
                
              2- Tommy                                                                          3-soccer
               
              3- Johnathan                                                                      1-tennis
                
              4- Mariya                                                                         2-hand ball


              // LEFT join forms an intersection and shows data as one table.
                   
                // LEFT join exempts the uncommon part of right table and includes all commonand common form left table .   

                // RESULT of LEFT-JOIN :


                                    TABLE people's liked sport :


                                  | 0- | adam        |  NULL            |
                                  | 1- | john        |  Cricket ,tennis |                 
                                  | 2- | Tommy       |  Hand ball       |
                                  | 3- | Johnathan   |  soccer          |
                                  | 4- | Maria       |  NULL            |
 
 
 */

   -- SQL code :

   SELECT *
FROM Users
LEFT JOIN LIKES1
ON Users.Id = LIKES1.UserId