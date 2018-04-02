#输入n(n<=16）,组成第一个数为1的相邻两数为素数的1-n组成的素数环，逆序输出
#若无输出方案，则输出“No Answer”
#例：
#输入：6
#输出：1
#1 4 3 2 5 6
#1 6 5 2 3 4

global maxn,total
maxn=16
total=0

def isPrime(n):
    for i in range(2,int(n**0.5)+1):
        if(n%i==0):
            return False
    return True
PRIME = [False,False]+list(map(isPrime,range(2,2*maxn+1)))


global n
n = int(input())

lst1=[0]*(n+1)
lst2=[False]*(n+1)

def prt(n):
    global total
    total+=1
    for j in range(1,n+1):
        print(lst1[j],end=' ')
    print()


def search(t=2,n=20):
    for i in range(2,n+1):
        if(PRIME[i+lst1[t-1]] and (not lst2[i])):
            lst1[t]=i
            lst2[i]=True
            if(t==n and PRIME[1+lst1[-1]]):
                prt(n)
            else:
                search(t+1,n)
            lst2[i]=False
                
if __name__ == '__main__':
    lst1[1] = 1
    lst2[1] = True
    if(n%2==1):
        print("No Answer")
    else:
        search(2,n)

    
                
            
        
