class Solution {
public:
    int fib(int n) {
        if(n == 0)
            return 0;

        if(n == 1)
            return 1;
            
        return fib(n-1)+fib(n-2);
          
    }
};
int main(){
    Solution s1; // object creation

    int n;
    cin>>n;

    s1.fib(n); // function call
}