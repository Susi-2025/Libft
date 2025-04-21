/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:01:19 by vinguyen          #+#    #+#             */
/*   Updated: 2025/04/16 16:19:26 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "ft_isalnum.c"
#include "ft_isalpha.c"
#include "ft_isascii.c"
#include "ft_isdigit.c"
#include "ft_isprint.c"
#include "ft_memcpy.c"
#include "ft_memmove.c"
#include "ft_memset.c"

#include "ft_bzero.c"
#include "ft_strchr.c"
#include "ft_strlcat.c"
#include "ft_strlen.c"
#include "ft_toupper.c"
#include "ft_tolower.c"

#include "ft_strrchr.c"

//****ft_bzero test **** it means test ok with all possible cases
// int main(void)
// {
//     char s2[50] = "Nobody better than you my lovely babies";
//     char s3[50] = "Nobody better than you my lovely ba";
//     int n = 10;
//     int flag = 0;

//     bzero(s2,n);
//     ft_bzero(s3,n);
//     for (int i = 0; i < 50; i++)
//         printf("%d ", (unsigned char)s2[i]);
//     printf("\n");
//     for (int i = 0; i < 50; i++)
//         printf("%d ", (unsigned char)s3[i]);
//     printf("\n");
//     for (int i = 0; i < 50; i++)
//         if (s2[i] != s3[i])
//         {
//             printf("There is differences at position: %i \n", i);
//             flag++;
//         }
//     if (flag == 0)
//         printf("Std function and my function are same \n");
//     return 0;
// }

// remain test
// int main(void)
// {
//     // char c1 = 'y';
//     // char c2 =  '@';
//     // char c3 =  'H';
//     // int c4 = 2358;
//     // //char c5 = '-9';
//     // int c5 = -1;
//     // int c6 = 300;
//     // int c7 = -1;
//     // char s1[30] = "Hello WorldNow Oh Babies";
//     char s2[30] = "Nobody better than you";
//     char s3[30] = "";
//     // char s4[30] = "Baby One More Time";
//     char s4[30] = "";
//     // int c = 300;
//     int n = 20;
//     //isalpha
//     // printf("Check the character %c with std function: %d \n", c1, isalpha(c1));
//     // printf("Check the character %c with my function: %d \n", c1, ft_isalpha(c1));
//     // printf("Check the character %c with std function: %d \n", c2, isalpha(c2));
//     // printf("Check the character %c with my function: %d \n", c2, ft_isalpha(c2));
//     // printf("Check the character %c with std function: %d \n", c3, isalpha(c3));
//     // printf("Check the character %c with my function: %d \n", c3, ft_isalpha(c3));
//     //isdigt
//     // printf("Check the character %c with std function: %d \n", c4, isdigit(c4));
//     // printf("Check the character %c with my function: %d \n", c4, ft_isdigit(c4));
//     // printf("Check the character %i with std function: %i \n", c5, isdigit(-1));
//     // printf("Check the character %i with my function: %i \n", c5, ft_isdigit(-1));
//     // printf("Check the character %c with std function: %d \n", c1, isdigit(c1));
//     // printf("Check the character %c with my function: %d \n", c1, ft_isdigit(c1));
//     // printf("Check the character %i with std function: %d \n", c6, isdigit(c6));
//     // printf("Check the character %i with my function: %d \n", c6, ft_isdigit(c6));
//     // //int a = (isdigit('3') == ft_isdigit('3'));
//     // printf("Check the comparison is: %i \n", (isdigit('-3') == ft_isdigit('-3')));
//     //isalnum
//     // printf("Check the character %i with std function: %d \n", c4, isalnum(c4));
//     // printf("Check the character %i with my function: %d \n", c4, ft_isalnum(c4));
//     // printf("Check the character %i with std function: %d and my function is: %d \n", c7, isascii(c7), ft_isascii(c7));
//     // printf("Check the character %i with std function: %d and my function is: %d \n", c7, isprint(c7), ft_isprint(c7));
//     // printf("Length of string %s in std function and my function is: %d vs %d \n", s1, strlen(s1), ft_strlen(s1));
//     //printf("New string after std memset for %i character by value %i is: %s \n", n, c, memset(s2,c,n));3
//     //memset(s2,c,n);
//     // bzero(s2,n);
//     // ft_bzero(s3,n);
//     // memcpy(s3, s2, n);
//     // ft_memcpy(s4, s2, n);
//     memmove(s3, s2, n);
//     ft_memmove(s4, s2, n);
//     for (int i = 0; i < 30; i++)
//         printf("%02x ", s2[i]);
//     printf("\n");
//     for (int i = 0; i < 30; i++)
//         printf("%02x ", s3[i]);
//     printf("\n");
//     for (int i = 0; i < 30; i++)
//         printf("%02x ", s4[i]);
//     memmove(&s3[10], &s3[0], 15);
//     ft_memmove(&s4[10], &s4[0], 15);
//     printf("\n");
//     for (int i = 0; i < 30; i++)
//         printf("%02x ", s3[i]);
//     printf("\n");
//     for (int i = 0; i < 30; i++)
//         printf("%02x ", s4[i]);
//     return 0;
// }

//****ft_strchr ****ok
// int main(void)
// {
//     char s[] = "Today is a good day to come back to your family";
//     char c[] = {'1', 'y', 'e'};
//     for (int i = 0; i < 3; i++)
//     {
//         printf("The 1st position of %c in string %s is: %s \n", c[i], s, strchr(s, c[i]));
//         printf("The 1st position of %c in string %s is: %s \n", c[i], s, ft_strchr(s, c[i]));
//     }
//     return 0;
// }

// ****ft_strlcat test****ok- 
// Length of source: 25, length of destination: 8. Must change size in some cases:
// - lesser than length of dest to see only return. Example: 5
// - lesser or equal than sum of length dest and length source to see the concatrate. Example: 30
// - bigger than sum of length dest and length source to see the full copy . Example 35
// void print_bytes(const char *str, size_t len)
// {
//     for (size_t i = 0; i < len; i++)
//     {
//         if (str[i] == '\0')
//             printf("Byte %zu: NULL terminator\n", i);
//         else
//             printf("Byte %zu: %c (%d)\n", i, str[i], str[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     char first[] = "This is ";
//     char last[] = "a potentially long string";
//     int r;
//     int r_test;
//     int size = 40;
//     char buffer[size];
//     char buffer_test[size];

//     printf("Length of source: %d \n", ft_strlen(last));
//     printf("Length of destination: %d \n", ft_strlen(first));

//     strcpy(buffer,first);
//     strcpy(buffer_test,first);
//     r = strlcat(buffer,last,size);
//     r_test = ft_strlcat(buffer_test,last,size);

//     puts("Standard buffer:");
//     puts(buffer);
//     printf("\n");
    
//     puts("My custom buffer.");
//     puts(buffer_test);
//     printf("\n");
    
//     printf("Value returned with std function: %d\n",r);
//     printf("Value returned with my function: %d\n",r_test);
//     if( r >= size )
//         puts("String truncated");
//     else
//         puts("String was fully copied");

//     print_bytes(buffer, size);
//     print_bytes(buffer_test, size);
//     return(0);
// }

// ****ft_strlen test****ok
// int main(void)
// {
//     char s[30] = "Hello World Babies";
//     char t[20] = "Hive Helsinki";
//     printf("The string %s has lengths-std function: %i \n", s, strlen(s));
//     printf("The string %s has lengths-custom function: %i \n", s, ft_strlen(s));
//     printf("The string %s has lengths-std function: %i \n", t, strlen(t));
//     printf("The string %s has lengths-custom function: %i \n", t, ft_strlen(t));
//     return 0;
// }

// ****tolower test**** test with char string and int string
// int main(void)
// {
//     char c[] = {'1', '0', 'a', 'z', 'A', '$',' '};
//     int d[] = {-1, 0, 255, 300};
//     for (int i = 0; i < 7; i++)
//     {
//         printf("The resut of std function convert %c to: %i \n", c[i], tolower(c[i]));
//         printf("The resut of my function convert %c to: %i \n", c[i], ft_tolower(c[i]));
//     }
//     printf("Test with negative value \n");
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The resut of std function convert %i to: %i \n", d[i], tolower(d[i]));
//         printf("The resut of my function convert %i to: %i \n", d[i], ft_tolower(d[i]));
//     }
//     return 0;
// }

// ****toupper test****ok
// int main(void)
// {
//     char c[] = {'1', '0', 'a', 'z', 'A', '$',' '};
//     int d[] = {-1, 0, 255, 300};
//     for (int i = 0; i < 7; i++)
//     {
//         printf("The resut of std function convert %c to: %i \n", c[i], toupper(c[i]));
//         printf("The resut of my function convert %c to: %i \n", c[i], ft_toupper(c[i]));
//     }
//     printf("Test with negative value \n");
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The resut of std function convert %i to: %i \n", d[i], tolower(d[i]));
//         printf("The resut of my function convert %i to: %i \n", d[i], ft_tolower(d[i]));
//     }
//     return 0;
// }

//****ft_strchr ****ok
int main(void)
{
    char s[] = "Today is a good day to come back to your family";
    char c[] = {'1', 'w', 'e', 'a', 'n'};
    for (int i = 0; i < 5; i++)
    {
        printf("Std: The last position of %c in string %s is: %s \n", c[i], s, strrchr(s, c[i]));
        printf("Custom: The last position of %c in string %s is: %s \n", c[i], s, ft_strrchr(s, c[i]));
    }
    return 0;
}
