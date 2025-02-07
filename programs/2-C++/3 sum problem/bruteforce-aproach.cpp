//    in ( 3 sum ) problem brute force  asks us to create triplets having 3 numbers of different index'es , than shortlist the required triplet.
//   suppose  triplets are in form ( a + b + c = 0 )

//   the trplet index'es are arranged as (i , j , k) , where (i != j != k) each has different trplet index.
//   to pick numbers we will use a loops
           
              /*
                i.e 
                                           // here triplets will start from number 

                      for(i to n){
                      
                         for( j = i+1 to n ){
                         
                           for( k = j+1 to n ){
                          
                          if( a + b + c = 0){
                               
                                and store;

                               }
                             }
                           }
                         }
              */


class solution {
 
  public:

     vector<vector<int>> threesum(vector<int>& nums){  // vector is datatype to store integers in pairs (here in pair of 3 to be very specifics.)
        
       set<vector<<int> s;   // used to store unique triplets.

         int n = num.size();
        vector<vector<int>> ans; 
       
           for(int i=0; i<n; i++){
              for(int j=i+1; j<n ; j++){
                 for(int k=j+1; k<n; k++){
                    
                    if(nums[i] + nums[j] + nums[k] == 0){

                       vector<int> trip = {nums[i]  ,  nums[k]  ,  nums[k]};

                        sort(trip.begin(), trip.end()); // used to sort the triplet vector.

                         if(s.find(trip) == s.end()) {    // if is used to satisfy that the triplet is unique.

                             s.insert(trip){    // used insert triplet to (.ans)

                               ans.push_back(trip); // used to add to answer.

                             }
                         }

                    }
                 } 
              }
           }

       return ans;
     }
};

               
                                       // TIME COMPLEXITY is O( all unique triplets )