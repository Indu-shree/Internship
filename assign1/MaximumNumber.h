int maximum(int max,int a)
{
    for(i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        printf("maximum number is %d\n",max);
    }
}
