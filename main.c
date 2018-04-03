/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: male-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:13:05 by male-gal          #+#    #+#             */
/*   Updated: 2018/04/03 20:47:32 by male-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	main()
{

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
printf("STRCMP :\nattendu : ''%d, %d'' - obtenu : ''%d, %d''\n", strcmp("ABCde*f", "ABCde*f"), strcmp("ABcDeF", "ABCDEF"), ft_strcmp("ABCde*f", "ABCde*f"), ft_strcmp("ABcDeF", "ABCDEF"));
printf("STRNCMP :\nattendu : ''%d, %d'' - obtenu : ''%d, %d''\n", strncmp("ABCde*f", "ABCde*f", 3), strncmp("ABcDeF", "ABCDEF", 5), ft_strncmp("ABCde*f", "ABCde*f", 3), ft_strncmp("ABcDeF", "ABCDEF", 5));
printf("%s\n", strchr("lol cest du fun ici 42", '4'));
printf("STRCHR :\nattendu : ''%s'' - obtenu : ''%s''\n", strchr("lol c'est du fun ici a 42 42 42 42\0", 'a'), ft_strchr("lol c'est du fun ici a 42 42 42 42\0", 'a'));
printf("STRrCHR :\nattendu : ''%s'' - obtenu : ''%s''\n", strrchr("lo c'est du fun ici a 42 42 42 42\0", '2'), ft_strrchr("lo c'est du fun ici a 42 42 42 42\0", '2'));
printf("STRSTR :\nattendu : ''%s'' - obtenu : ''%s''\n", strstr("lo c'est du fun ici a 42 42 42 42\0", "ici"), ft_strstr("lo c'est du fun ici a 42 42 42 42\0", "ici"));
printf("STRnSTR :\nattendu : ''%s'' - obtenu : ''%s''\n", strnstr("ABCDEFGHIJ", "E", 5), ft_strnstr("ABCDEFGHIJ", "E", 5));
printf("MEMCMP :\nattendu : ''%d'' - obtenu : ''%d''\n", memcmp("ABCDEFGHIJ", "ABCD", 3), ft_memcmp("ABCDEFGHIJ", "ABCD", 3));




return (0);
}

