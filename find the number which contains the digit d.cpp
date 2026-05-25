vector<int> solve(int n, int d) {
    // code here
    vector<int> result;
    int a,temp;
    for(int i=0;i<=n;i++){
        temp = i;
        if(i==0 && d==0){
            result.push_back(i);
        }
        
        while(temp>0){
            
            a = temp%10;
            if(a == d){
                result.push_back(i);
                break;
            }
            temp = temp/10;
        }
        
    }
    if(result.empty()){
        result.push_back(-1);
    }
    return result;
}