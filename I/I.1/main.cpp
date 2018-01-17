#include<iostream>
#include<cstring>
using namespace std;

char s1[250], s2 [250];
char *strcpy_array( char dest[], char src[] );
char *strcpy_pointer( char *dest, char *src );

int main()
{
    cin>>s1;
    strcpy_pointer(s2,s1);
    cout<<"a) "<<s2;

    cin>>s1;
    cout<<"b) "<<strcpy_array(s2,s1);
}

char *strcpy_pointer( char *dest, char *src )
{
    while(*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
     }
    *dest='\0';

}

char *strcpy_array( char dest[], char src[] )
{
    int i;

    for(i=0;i<=strlen(src);i++)
    {
        dest[i]=src[i];
    }

    return dest;
}
