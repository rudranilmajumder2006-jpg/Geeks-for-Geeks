// User function template for C++

class Solution {
  public:
    int isMagic(int N) {
        // code here
        
        if(N==0){
            return 0;
        }
        
        while(N>9){
            int sum = 0;
            while(N>0){
                sum+=N%10;
                N/=10;
            }
            N=sum;
        }
        
        if (N == 1) {
        return 1;
        } else {
        return 0;
    }
    }
};