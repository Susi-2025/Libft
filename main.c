/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:01:19 by vinguyen          #+#    #+#             */
/*   Updated: 2025/04/23 17:16:35 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include "ft_isalnum.c"
#include "ft_isalpha.c"
#include "ft_isascii.c"
#include "ft_isdigit.c"
#include "ft_isprint.c"
#include "ft_memcpy.c"
#include "ft_memmove.c"
#include "ft_memset.c"

#include "ft_atoi.c"
#include "ft_bzero.c"
#include "ft_calloc.c"
#include "ft_itoa.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"
#include "ft_putchar_fd.c"
#include "ft_putendl_fd.c"
#include "ft_putnbr_fd.c"
#include "ft_putstr_fd.c"
#include "ft_split.c"
#include "ft_strampi.c"
#include "ft_strchr.c"
#include "ft_strdup.c"
#include "ft_striteri.c"
#include "ft_strjoin.c"
#include "ft_strlcat.c"
//#include "ft_strlen.c"
#include "ft_strncmp.c"
#include "ft_strnstr.c"
#include "ft_strrchr.c"
#include "ft_strtrim.c"
#include "ft_substr.c"
#include "ft_toupper.c"
#include "ft_tolower.c"

// #include "strnstr.c"

//****ft_atoi****ok
// int main(void)
// {
//     char *str[] = {"--123", "-153", "+456", "-+4869", "9012", "+1-2687", "-8a9756"};
//     for (int i = 0; i < 7; i++)
//     {
//         printf("Std: the value of %s to integer is: %i \n", str[i], atoi(str[i]));
//         printf("Cus: the value of %s to integer is: %i \n", str[i], ft_atoi(str[i]));
//     }
//     return (0);
// }

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

//****ft_calloc ****/ ok
// int main(void)
// {
//     size_t count = 10;
//     size_t size = sizeof(char);

//     char *std_ptr = (char *)calloc(count, size);
//     char *custom_ptr = (char *)ft_calloc(count, size);

//     if (std_ptr)
//     {
//         printf("Std calloc result (first 10 bytes): ");
//         for (size_t i = 0; i < count; i++)
//             printf("%d ", std_ptr[i]);
//         printf("\n");
//     }
//     if (custom_ptr)
//     {
//         printf("Custom calloc result (first 10 bytes): ");
//         for (size_t i = 0; i < count; i++)
//             printf("%d ", custom_ptr[i]);
//         printf("\n");
//     }
//     free(std_ptr);
//     free(custom_ptr);
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

//****ft_itoa ****/
// int main(void)
// {
//     int numbers[] = {2147483647, -2147483648, 0, -42, 1337};
//     for (int i = 0; i < 5; i++)
//     {
//         char *c = ft_itoa(numbers[i]);
//         printf("The value of %i in array: %s \n", numbers[i], c);
//     }
//   return 0;
// }

//****ft_memchr ****ok
// int main(void)
// {
//     char s[] = "Today is a good day to come back to your family";
//     char c[] = {'1', 'y', 'e'};
//     size_t n = 40;
//     for (int i = 0; i < 3; i++)
//     {
//         void *std_ptr = memchr(s, c[i], n);
//         void *ft_ptr = ft_memchr(s, c[i], n);

//         if (std_ptr)
//             printf("Std: The 1st position of '%c' in string \"%.*s\" is: '%c'\n", c[i], (int)n, s, *(char *)std_ptr);
//         else
//             printf("Std: Character '%c' not found in first %zu bytes.\n", c[i], n);

//         if (ft_ptr)
//             printf("Custom: The 1st position of '%c' in string \"%.*s\" is: '%c'\n", c[i], (int)n, s, *(char *)ft_ptr);
//         else
//             printf("Custom: Character '%c' not found in first %zu bytes.\n", c[i], n);
//     }

//     return 0;
// }

//****ft_memcmp****ok
// int main(void)
// {
//     char *s[] = {"Hello World", "Hello", "A", "123", "a1b2c3"};
//     char *c[] = {"Hello World", "He", "AB", "12345", "a1b2 "};
//     size_t n = 8;
//         for (int i = 0; i < 5; i++)
//         {
//             printf("Std: The comparison with %zu char of %s and %s is: %i \n", n, s[i], c[i], memcmp(s[i], c[i], n));
//             printf("Custom: The comparison of %zu char of %s and %s is: %i \n", n, s[i], c[i], ft_memcmp(s[i], c[i], n));
//         }
//         return 0;  
// }

//****ft_putchar_fd ****/
// int main(void)
// {
//     ft_putchar_fd('A', 1);
//     ft_putchar_fd('B', 2);
//     ft_putchar_fd('C', 0);
//     return 0;
// }

//****ft_putendl_fd ****/
// int main(void)
// {
//     char s[] = "Hello";
//     ft_putendl_fd(s,1);
//     return 0;
// }

//****ft_putnbr_fd */
// int main(void)
// {
//     int i = -2147483649;
//     int fd = 1;
//     ft_putnbr_fd(i, fd);
//     printf("\n");
//     return 0;
// }

// //****ft_putstr_fd ****/
// int main(void)
// {
//     char s[] = "Hello";
//     ft_putstr_fd (s, 1);
//     ft_putstr_fd ("\n", 1);
//     ft_putstr_fd (s, 2);
//     ft_putstr_fd ("\n", 1);
//     ft_putstr_fd (s, 0);
//     ft_putstr_fd ("\n", 1);
//     return 0;
// }

// ****ft_split */
int main()
{
  char first[] = "   H you baby 1 1 ";
  char c = ' ';
  unsigned int count = ft_count(first, c);
  printf("The string %s has been cut by %c to %i strings \n", first, c, count);
  char **out = ft_split(first, c);
  for (int i = 0; i <= count; i++)
    printf("New string is %s \n", out[i]);
    //printf("New string is %s \n", out);
  return(0);
}

//****ft_strampi**** */
// char alt_case(unsigned int i, char c)
// {
//     if (i % 2 == 0 && c >= 'a' && c <= 'z')
//         return (c - 32); // lowercase to uppercase
//     return (c);
// }

// int main(void)
// {
//     char *c[] = {"Hello World", "He", "AB", "12345", "a1b2 "};
//     for (int i = 0; i < 5; i++)
//     {
//         char *result = ft_strampi(c[i], alt_case);
//         if (result)
//         {
//             printf("Result: %s\n", result);
//             free(result);
//         }
//     }
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

//****ft_strdup ****ok
// int main(void)
// {
//     char s[] = "Today is a good day to come back to your family";
//     char *c = strdup(s);
//     char *c1 = ft_strdup(s);
//     printf("The new std duplicate string of %s is: %s \n", s, c);
//     printf("The new std duplicate string of %s is: %s \n", s, c1);
//     return 0;
// }

//****ft_striteri ****/
// void to_uppercase(unsigned int i, char *c)
// {
//     (void)i;
//     if (*c >= 'a' && *c <= 'z')
//         *c -= 32;
// }

// int main(void)
// {
//     char str[] = "hello world";

//     printf("Before: %s\n", str);
//     ft_striteri(str, to_uppercase);
//     printf("After:  %s\n", str);

//     return 0;
// }

//****ft_strjoin****
// int main(void)
// {
//     char s1[] = "Hello World 2";
//     char s2[] = "1 Good Morning";
//     char *s3 = ft_strjoin(s1,s2);
//     printf("The joined string from s1: %s and s2: %s is: %s \n", s1, s2, s3);
//     return (0);
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

//****ft_strncmp test****ok
// int main(void)
// {
//     char *s[] = {"Hello World", "Hello", "A", "123", "a1b2c3"};
//     char *c[] = {"Hello World", "He", "AB", "12345", "a1b2 "};
//     size_t n = 8;
//         for (int i = 0; i < 5; i++)
//         {
//             printf("Std: The comparison of %s and %s is: %i \n", s[i], c[i], strncmp(s[i], c[i], n));
//             printf("Custom: The comparison of %s and %s is: %i \n", s[i], c[i], ft_strncmp(s[i], c[i], n));
//         }
//         return 0;  
// }

//****ft_strnstr****ok
// int main(void)
// {
//     char s[] = "Today is a good day to come back to your family";
//     char *c[] = {"is", "com", "day", "12345", "your"};
//     size_t n = 30;
//         for (int i = 0; i < 5; i++)
//         {
//             printf("Std: The position of %s in string %s is: %s \n", c[i], s, strnstr(s, c[i], n));
//             printf("Custom: The position of %s in string %s is: %s \n", c[i], s, ft_strnstr(s, c[i], n));
//         }
//     return 0;
// }

//****ft_strrchr ****ok
// int main(void)
// {
//     char s[] = "Today is a good day to come back to your family";
//     char c[] = {'1', 'w', 'e', 'a', 'n'};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Std: The last position of %c in string %s is: %s \n", c[i], s, strrchr(s, c[i]));
//         printf("Custom: The last position of %c in string %s is: %s \n", c[i], s, ft_strrchr(s, c[i]));
//     }
//     return 0;
// }

//****ft_strtrim ****/
// int main(void)
// {
//     char s1[] = "2Hellor1 World12 ";
//     char *s2[] = {"2H", "2He", "d", "", "ll", "1", "2", " ", "  "};
//     for (int i = 0; i < 10; i++)
//     {
//         char *s3 = ft_strtrim(s1,s2[i]);
//         printf("The trim string from s1: %s and s2: %s is: %s \n", s1, s2[i], s3);
//         free (s3);
//     }
//     return (0);
// }

// //****ft_substr****
// int main(void)
// {
//     char s[] = "Hello World New Year European";
//     unsigned int start = 20;
//     size_t len  = 20;
//     printf("The result of substr start from %i position to %i character is: %s \n", start, len, ft_substr(s,start,len));
//     return 0;
// }

// ****tolower test**** test with char string and int string
// int main(void)
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


