// class Solution{
//   public:
  
//     //Function to find starting point where the truck can start to get through
//     //the complete circle without exhausting its petrol in between.
//     int tour(petrolPump p[],int n)
//     {
//        //Your code here
//        int def = 0;
//        int bal = 0;
//        int start = 0;
//        for(int i=0; i<n;i++){
//            bal += p[i].petrol - p[i].distance;
//            if(bal<0){
//                def += bal;
//                start = i+1;
//                bal = 0;
//            }
           
//        }
//        if(def+bal >= 0){
//            return start;
//        }else{
//            return -1;
//        }
//     }
// };
