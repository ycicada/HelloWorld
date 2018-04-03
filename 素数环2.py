# -*- coding: utf-8 -*-
"""
素数环2
Created on Tue Apr  3 09:34:37 2018

@author: yxzyb-YingGQ
"""
#素数环


def prt():
    '''输出一种方案，并计数'''
    global total;
    total+=1
    for i in range(1,n+1):
        print(a[i],end=' ')
    print()
    
def search(t,n):
    '''搜索方案'''
    for i in range(2,n+1):#从数字2开始搜索
        if ((a[t-1]+i) in P) and (not b[i]):
            a[t] = i
            b[i] = True
            if t==n and (a[1]+a[n]) in P:
                prt()
            else:
                search(t+1,n) #找下一个数
            b[i] = False      #回溯
            
if __name__=="__main__":
    n = int(input())

    #生成2-2n之间的素数集
    P=set([p for p in range(2,2*n) if 0 not in[p%d for d in range(2,int(p**0.5)+1)]])
    a = [0,1]+[0]*(n-1) #第1个数固定为1，防止重复方案，a[0]不用
    b = [False,True]+[False]*(n-1) #标记第1个数，b[0]不用
    total=0;
    #从第2个数开始搜索，并打印各种方案
    search(2,n)
    #输出方案总数
    print(total)

    
