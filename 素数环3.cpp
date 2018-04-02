#include <iostream>  
#include <algorithm>  
using namespace std;  
  
const int MAXN = 1000;  
int isp[MAXN], vis[MAXN], A[MAXN], n;  
  
int is_prime(int x) {    //判断一个数是否为素数  
    for(int i = 2; i*i <= x; ++i) {  
        if(x % i == 0) return 0;  
    }  
    return 1;  
}  
  
void dfs(int cur) {  
    if(cur == n && isp[A[0] + A[n-1]]) {  
        for(int i = 0; i < n; ++i) cout << A[i] << " ";  
        cout << endl;  
    }else {  
        for(int i = 2; i <= n; ++i) {  
            if(!vis[i] && isp[i + A[cur-1]]) {  
                A[cur] = i;   //数字i满足条件，所以第cur个位置可以放数字i  
                vis[i] = 1;  
                dfs(cur+1);  
                vis[i] = 0;   //跟上题一样，一定不能忘记把vis的值改回来，原因见上一题的代码注释  
            }  
        }  
    }  
}  
  
int main() {  
    memset(vis, 0, sizeof(vis));   //递归调用之前，一定要把vis函数清0  
    cin >> n;  
    for(int i = 2; i <= 2*n; ++i) isp[i] = is_prime(i);   //先判断一个数是不是素数，便于后期判断  
    A[0] = 1;   //题目规定第一个数字从1开始  
    dfs(1);     //所以递归调用是用位置1开始，而不是从位置0开始，因为第一个位置的数字已经确定了是1  
    return 0;  
}  
