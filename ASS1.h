int isAlpha(char c)
{
    if(c>='A'&&c<='Z'||c>='a'&&c<='z')return 1;
    return 0;
}

char toUpper(char c)
{
    if(c>='a'&&c<='z') c=c-32;
    return c;
}

int isDigit(char c)
{
    if(c>='1'&&c<='9')return 1;
    return 0;
}

int isPrime(int n)
{
    int d;
    for(d=2;d<=sqrt(n);d++)
    {
        if(n%d==0)return 0;
    }
    return 1;
}