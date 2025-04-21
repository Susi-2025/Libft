#include <stdio.h>
#include <string.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = strlcat(buffer,last,size);
    printf("Length of source: %d \n", ft_strlen(last));
    printf("Length of destination: %d \n", ft_strlen(first));

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r >= size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}