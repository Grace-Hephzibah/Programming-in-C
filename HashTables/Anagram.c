#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int anagram(char *s1, char *s2)
{
    int hash1[26] = {0}, hash2[26] = {0}, l1 = strlen(s1), l2 = strlen(s2), sum, check = 1, x;
    int cmp1,cmp2,cmp3;
    if(l1!=l2) return 0;
    
    for(int i=0; i<l1; i++)
    {   
        x = (s1[i] > 96) ? 97 : 65;
        hash1[s1[i] - x]++;
        x = (s2[i] > 96) ? 97 : 65;
        hash2[s2[i] - x]++;
    }
    
    for(int i=0; i<26; i++)
    {
        sum = hash1[i] + hash2[i];
        
        cmp1 = (sum==0);
        cmp2 = ((hash1[i]%2==0 || hash2[i]%2==0)&&(sum%4==0));
        cmp3 = ((hash1[i]%2!=0 || hash2[i]%2!=0)&&(sum%2==0));
        
        if (! (cmp1|| cmp2 || cmp3))
            {check = 0;break;}
    }
    
    return check;
}

int main()
{
    char *s1 = malloc(100 * sizeof(char)), *s2 = malloc(100 * sizeof(char));
    printf("Enter the 2 strings : ");
    scanf("%s %s", s1,s2);
    
    if(anagram(s1, s2))   printf("Hola ! They form an Anagram");
    else printf("Alas! They do not form an Anagram");
    return 0;
}
