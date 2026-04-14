// Given an array arr[] of positive integers. Return true if all the array elements are palindrome otherwise, return false.

/*Complete the function below*/

class Solution {
  public:
  
  int isRev(int num){
      int r = 0;
      while(num>0){
          r = r*10 + (num%10);
          num= num/10;
      }
      return r;
      
  }
    bool isPalinArray(vector<int> &arr) {
        // code here
        int n= arr.size();
        for(int i =0;i<n;i++){
            if(arr[i] != isRev(arr[i])) return false; 
        }
        return true;
        
        
    }
};