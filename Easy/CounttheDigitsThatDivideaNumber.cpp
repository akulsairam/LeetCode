class Solution {
public:
    int countDigits(int num) {
        int count=0,r,n=num;
        while(num>0){
            r=num%10;
            if(n%r==0){
                count++;
            }
            num=num/10;
        }
        return count;
    }
};
