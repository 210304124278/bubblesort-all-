
def bubblesort(a,n):
    for i in range(n-1):
        for j in range(n-i-1):
            if a[j]>a[j+1]:
                a[j],a[j+1]=a[j+1],a[j]

def printarray(a,n):
    for i in range(n):
        print(a[i])


a=[21,34,2,56,5]
n=len(a)
bubblesort(a,n)
printarray(a,n)
