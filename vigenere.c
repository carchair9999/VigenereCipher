#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, string argv[])
{
    int i, n, m, j;
    
    if (argc!=2)
        {
            printf("Please input only program name and worded key!!\n");
            return 1;
        }
    else
    {
        for (j=0, m=strlen(argv[1]); j<m; j++)
        {
            {
                if (isalpha(!argv[1][j])|| isdigit(argv[1][j]))
                {
                    printf ("please try again\n");
                    return 1;
                }
                    
            }
        }
    }
    string k = argv[1];
    m=strlen(k);
    string s =GetString();
    
    for(i=0, j=0, n=strlen(s);n>i;i++)  
        {
            int z= tolower(k[j%m])-'a';
            
            if(isupper(s[i]))
            {
                int x=((s[i]-'A'+ z)%26)+'A';
                printf("%c", x);
                j++;
            }
            
            else if(islower(s[i]))
            {
                int x=((s[i]-'a'+z)%26)+'a';
                printf("%c",x);
                j++;
            }
            else
            {
                printf("%c", s[i]);    
            }
        }
        
    printf("\n"); 
    return 0;
}