
/*
   Disclaimer by me :
     
      *** just for exapmle cant be run ***

        simple demonstation and explaination of a program given by AI :
          
           Leaning towards the (Resting Type of API's) 
 
          the below content is code + summary as comments

            written with the helping explianation of chatgpt.
       
*/


#include <curl/curl.h> 

  // (curl / curl.h) are header files used to work with, ( Hyper text transfere protocol (HTTP)) server protocols 
    // Used for : retrival/display of hyper text documents , through world wide web (www.) 
       // .i.e a HTTP url is (https:www.api.example.com\data) , there in https (s stands for secure)
         
       // creating a builtin CURL object of header file    (c URL)
         // this function is used to initiallize CURL functions .i.e GET(); , POST(); etc
     
               // starting a main function

            int main()
             {
          
         CURL *curl = curl_easy_init() ;
             /*
                1 - here in ( CURL *curl ) pointer " *curl " is pointing towards the Session object " CURL ".
                2 - also  in ( curl_easy_init(); ) starts a new CURL sessions that returns a pointer
                3 - which is then assigned as value of " *curl " 
             */  
          
                if(curl){   
                    /*
    
     1- checks if the (curl_easy_init();) started the session and created a pointer wihich is assigned to curl
     2- if the function fails due to less resources it returns (*nullptr).
     3- also controls the functioning of further added functions

                    */
                 
                   // creating a function to set options for the CURL session

                     curl_easy_setopt(curl, CURLOPT_URL , "https://api.example.com/data");

                     /*
                        Its parameters are :

                    1- curl : initiallizes session object " CURL "'s handle.
                    2- CURLOPT_URL : ensures to send request to HTTP ,that the URL stored in next arg/parameter is sent.
                    3- URL : the provided url to send to HTTP protocols            
           
                     */

                   
                         // creating a function to perform the request to URL and check response from URL in console

                         curl_easy_perform(curl);

                        /*
                         It does following steps :

                              1- Sends the request to Specific URL.
                              2- waits for server's response.
                              3- by default : the output is shown in console of compiler.
                        */ 


                               // creating a function to clean up resource associsted with session objects (CURL)'s handle

                                 curl_easy_cleanup(curl);
                                   
                                   // this is important to prevent memory leaks in long time runing apps 
                                 
                                 /*
                                   It does following steps :

                          1- It deallocates memory and other resources used by Session object (CURL)
                          2- After this comand " CURL's " handle is no vaild any more (it should not be used.)
                                 
                                 */
                }
               return 0;
             }



               /*
                    This program works in following steps :
                     
                       1 - initiallization of CURL's session.
                       2 - setting up options so the specific URL can be used.
                       3 - sends request to URL and gets Response in console
                       4 - cleans up memory and resources used by CURL session.
               */