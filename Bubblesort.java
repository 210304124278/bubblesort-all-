class Bubblesort{
    void bubblesort(int[] a)
    {
        int n=a.length;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
               {
                if(a[j]>a[j+1])
                  {
                      int temp=a[j];
                      a[j]=a[j+1];
                      a[j+1]=temp;
                  }
                }
        }
    }
    void printarray(int[] a)
    {
        int n=a.length;
        for(int i=0;i<n;i++)
            System.out.print(a[i]+" ");
    }
    public static void main(String args[])
    {
        Bubblesort b=new Bubblesort();
        int[] a={23,1,4,0,98,54,32,17};
        b.printarray(a);
        b.bubblesort(a);
        System.out.println("sorted array");
        b.printarray(a);


    }
}