/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:13:05 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/04 22:42:39 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	main()
{

printf("\n ====================================== PARTIE I ========================================== \n\n");

printf("STRLEN :\nattendu : 26 - obtenu : %zu\n", ft_strlen("abcdefghijklmnopqrstuvwxyz\0"));
printf("STRDUP :\nattendu : ''GenreCeciEst42*test'' - obtenu : ''%s''\n", ft_strdup("GenreCeciEst42*test\0"));
printf("ATOI :\nattendu : ''15642'' - obtenu : ''%d''\n", ft_atoi("15642\0"));
printf("ISALPHA :\nattendu : ''%d, %d, %d'' - obtenu : ''%d, %d, %d''\n", isalpha(48), isalpha(70), isalpha(42), ft_isalpha(48), ft_isalpha(70), ft_isalpha(42));
printf("ISDIGIT :\nattendu : ''%d, %d, %d'' - obtenu : ''%d, %d, %d''\n", isdigit(48), isdigit(70), isdigit(55), ft_isdigit(48), ft_isdigit(70), ft_isdigit(55));
printf("ISALNUM :\nattendu : ''%d, %d, %d'' - obtenu : ''%d, %d, %d''\n", isalnum(48), isalnum(70), isalnum(42), ft_isalnum(48), ft_isalnum(70), ft_isalnum(42));
printf("ISASCII :\nattendu : ''%d, %d, %d'' - obtenu : ''%d, %d, %d''\n", isascii(48), isascii(70), isascii(42), ft_isascii(48), ft_isascii(70), ft_isascii(42));
printf("ISPRINT :\nattendu : ''%d, %d, %d'' - obtenu : ''%d, %d, %d''\n", isprint(48), isprint(70), isprint(42), ft_isprint(48), ft_isprint(70), ft_isprint(42));
printf("TO UPPER :\nattendu : ''%d, %d, %d'' - obtenu : ''%d, %d, %d''\n", toupper(57), toupper(114), toupper(122), ft_toupper(57), ft_toupper(114), ft_toupper(122));
printf("TO LOWER :\nattendu : ''%d, %d, %d'' - obtenu : ''%d, %d, %d''\n", tolower(75), tolower(84), tolower(42), ft_tolower(75), ft_tolower(84), ft_tolower(42));

// =========================================== STRINGS ============================================== //
printf("\nSTRINGS\n\n");


printf("STRCMP :\nattendu : ''%d, %d'' - obtenu : ''%d, %d''\n", strcmp("ABCde*f", "ABCde*f"), strcmp("ABcDeF", "ABCDEF"), ft_strcmp("ABCde*f", "ABCde*f"), ft_strcmp("ABcDeF", "ABCDEF"));
printf("STRNCMP :\nattendu : ''%d, %d'' - obtenu : ''%d, %d''\n", strncmp("ABCde*f", "ABCde*f", 3), strncmp("ABcDeF", "ABCDEF", 5), ft_strncmp("ABCde*f", "ABCde*f", 3), ft_strncmp("ABcDeF", "ABCDEF", 5));
printf("%s\n", strchr("lol cest du fun ici 42", '4'));
printf("STRCHR :\nattendu : ''%s'' - obtenu : ''%s''\n", strchr("lol c'est du fun ici a 42 42 42 42\0", 'a'), ft_strchr("lol c'est du fun ici a 42 42 42 42\0", 'a'));
printf("STRrCHR :\nattendu : ''%s'' - obtenu : ''%s''\n", strrchr("lo c'est du fun ici a 42 42 42 42\0", '2'), ft_strrchr("lo c'est du fun ici a 42 42 42 42\0", '2'));
printf("STRSTR :\nattendu : ''%s'' - obtenu : ''%s''\n", strstr("lo c'est du fun ici a 42 42 42 42\0", "ici"), ft_strstr("lo c'est du fun ici a 42 42 42 42\0", "ici"));
printf("STRnSTR :\nattendu : ''%s'' - obtenu : ''%s''\n", strnstr("ABCDEFGHIJ", "E", 5), ft_strnstr("ABCDEFGHIJ", "E", 5));

// ========================================== MEMOIRE =============================================== //

printf("\nMEMORY - Attention, le contenu ci dessous a ete lu par la fonction ft_readmem.\n\n");

printf("MEMCMP :\nattendu : ''%d'' - obtenu : ''%d''\n", memcmp("ABCDEFGHIJ", "ABCD", 3), ft_memcmp("ABCDEFGHIJ", "ABCD", 3));
printf("MEMCHR :\nattendu : ''%s'' - obtenu : ''%s''\n", ft_readmem(memchr("ABCDEFGHIJ", 'D', 5)), ft_readmem(ft_memchr("ABCDEFGHIJ", 'D', 5)));

char *str;
char *str2;

str = (char *)malloc(sizeof(char) * 11);
str2 = (char *)malloc(sizeof(char) * 11);
printf("MEMSET :\nattendu : ''%s'' - obtenu : ''%s''\n", ft_readmem(memset( str, 'w', 10)), ft_readmem(ft_memset( str2, 'w', 10)));

bzero( str, 10);
ft_bzero( str2, 10);
printf("BZERO :\nattendu : ''%s'' - obtenu : ''%s''\n", str, str2);
printf("MEMCPY :\nattendu : ''%s'' - obtenu : ''%s''\n", ft_readmem(memcpy( str, "abcdefgh", 4)), ft_readmem(ft_memcpy( str2, "abcdefgh", 4)));
printf("MEMcCPY :\nattendu : ''%s'' - obtenu : ''%s''\n", ft_readmem(memccpy( str, "ABCDEFGH", 'C', 7)), ft_readmem(ft_memccpy( str2, "ABCDEFGH", 'C', 7)));
printf("MEMMOVE :\nattendu : ''%s'' - obtenu : ''%s''\n", ft_readmem(memmove( str, "abcdefgh", 4)), ft_readmem(ft_memmove( str2, "abcdefgh", 4)));


// ========================================== PART II ============================================== //

printf("\n ====================================== PARTIE II ========================================= \n\n");

printf("FT_STRNEQU : attendu : ''1, 0'' - obtenu : ''%d, %d''\n", ft_strnequ("CA MATCH", "CA MATCHE", 7), ft_strnequ("CA MRTCH Pa", "CA MATCH Pa", 11));
printf("FT_PUTCHAR : attendu : '' 4 2'' - obtenu : ''"); fflush(stdout); ft_putchar('4'); printf(", "); fflush(stdout); ft_putchar('2'); printf("''\n");
printf("FT_PUTSTR : attendu : ''42 c'est de la balle *_* :d'' - obtenu : ''"); fflush(stdout); ft_putstr("42 c'est de la balle *_* :d"); printf("''\n");
printf("FT_PUTENDL : attendu : 42 c'est de la balle *_* :d\n            - obtenu : "); fflush(stdout); ft_putendl("42 c'est de la balle *_* :d");
printf("FT_PUTNBR : attendu : '' -42, 15436'' - obtenu : ''"); fflush(stdout); ft_putnbr(-42); printf(", "); fflush(stdout); ft_putnbr(15436); printf("''\n");

printf("FT_PUTCHAR_FD : attendu : '' 4 2'' (sortie ERROR) - obtenu : ''"); fflush(stdout); ft_putchar_fd('4', 2); printf(" "); fflush(stdout); ft_putchar_fd('2', 2); printf("''\n");
printf("FT_PUTSTR_FD : attendu : ''42 c'est de la balle *_* :d''(sortie ERROR) - obtenu : ''"); fflush(stdout); ft_putstr_fd("42 c'est de la balle *_* :d", 2); printf("''\n");
printf("FT_PUTENDL_FD : attendu : 42 c'est de la balle *_* :d (sortie ERROR)\n              - obtenu : "); fflush(stdout); ft_putendl_fd("42 c'est de la balle *_* :d", 2);
printf("FT_PUTNBR_FD : attendu : '' -42, 15436'' (sortie ERROR) - obtenu : ''"); fflush(stdout); ft_putnbr_fd(-42, 2); printf(", "); fflush(stdout); ft_putnbr_fd(15436, 2); printf("''\n");

return (0);
}

