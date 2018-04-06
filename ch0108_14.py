'''
14:扫雷游戏地雷数计算
查看
提交
统计
提问
总时间限制: 1000ms 内存限制: 65536kB 
描述
扫雷游戏是一款十分经典的单机小游戏。它的精髓在于，通过已翻开格子所提示的周围格地雷数，来判断未翻开格子里是否是地雷。
现在给出n行m列的雷区中的地雷分布，要求计算出每个非地雷格的周围格地雷数。
注：每个格子周围格有八个：上、下、左、右、左上、右上、左下、右下。
输入
第一行包含两个整数n和m，分别表示雷区的行数和列数。1 <= n <= 100, 1 <= m <= 100。
接下来n行，每行m个字符，‘*’表示相应格子中是地雷，‘？’表示相应格子中无地雷。字符之间无任何分隔符。
输出
n行，每行m个字符，描述整个雷区。若相应格中是地雷，则用‘*’表示，否则用相应的周围格地雷数表示。字符之间无任何分隔符。
样例输入
3 3
*??
???
?*?
样例输出
*10
221
1*1
'''
def calc(x,y):
    ct = 0
##    for i in range(x-1,x+2):
##        for j in range(y-1,y+2):
##            if( 0<=i<n and 0<=j<m):
##                if a[i][j]=='*':
##                    ct+=1
    for i in tuple(((i,j) for i in range(x-1,x+2)  for j in range(y-1,y+2) if 0<=i<n and 0<=j<m)):
        if a[i[0]][i[1]]=='*':
            ct+=1
    return ct

a =list()
n,m = map(int,input().split())
for i in range(n):
    a.append(input())

for i in range(n):
    for j in range(m):
        print('*' if a[i][j]=='*' else calc(i,j),end='' if j!=m-1 else '\n') #优化写法
##        if a[i][j]=='*':
##            print('*',end='')
##        else:
##            print(calc(i,j),end='')
##    print()

