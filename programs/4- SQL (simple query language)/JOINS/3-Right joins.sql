 /* 
 
            RIGHT join :

                  
                   this type of join includes everything from RIGHT table .


               // supposed Tables ,


           TABLE: Users :                                                                    TABLE: likes :

              0- adam                                                                           5- E-spots

              1- john                                                                           1-Cricket
                
              2- Tommy                                                                          3-soccer
               
              3- Johnathan                                                                      1-tennis
                
              4- Mariya                                                                         2-hand ball


              // RIGHT join forms an intersection and shows data as one table.
                   
                // RIGHT join exempts the uncommon part of RIGHT table and includes all commonand common form right table .   

                // RESULT of RIGHT-JOIN :


                                    TABLE people's liked sport :


                                  | 0- | NULL        |  NULL            |
                                  | 1- | john        |  Cricket ,tennis |                 
                                  | 2- | Tommy       |  Hand ball       |
                                  | 3- | Johnathan   |  soccer,E-sports |
                                  | 5- | NULL        |  E-sports        |
 
 */

  -- SQL code :

   SELECT *
FROM Users
RIGHT JOIN LIKES1
ON Users.Id = LIKES1.UserId