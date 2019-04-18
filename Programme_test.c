#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int main (int ac, char **av)
{
int i = 0;
int test;
char *tab;
char *tmp;

test = 0;
switch (atoi(av[i]))
{
	case 1 :
//atoi
		 if (ft_atoi("\t +0A") != atoi("\t +0A") ||  ft_atoi("\t -0.123") != atoi("\t -0.123")
				||  ft_atoi(" -32 ") != atoi(" -32 ") ||  ft_atoi(" +32 ") != atoi(" +32 ")
				||  ft_atoi("0377") != atoi("0377") ||  ft_atoi("0x7FFF") != atoi("0x7FFF")
				||  ft_atoi("2147483647") != atoi("2147483647") ||  ft_atoi("-2147483648") != atoi("-2147483648")
				||  ft_atoi(" -+3x7FFF") != atoi(" -+3x7FFF") || ft_atoi(" --0x7FFF") != atoi(" --0x7FFF"))
			test = 1;
		if (test == 0)
			printf("atoi = juste\n");
		else
			printf("atoi = FAUX\n)");
//memset
		test = 0;
		if (!(tab = malloc(sizeof(*tab) * 15)))
			return (0);
		test += strcmp(ft_memset(tab, 'c', 5), memset(tab, 'c', 5));
		test += strcmp(ft_memset(tab, 'c', 14), memset(tab, 'c', 14));
		test += strcmp(ft_memset(tab, '\n', 6), memset(tab, '\n', 6));
		test += strcmp(ft_memset(tab, '\0', 1), memset(tab, '\0', 1));
		if (test == 0)
			printf("memset = juste\n");
		else
			printf("memset = FAUX\n)");
//bzero
		test = 0;
		memset(tab, 'e', 5);
		ft_bzero(tab, 5);
		tmp = malloc(sizeof(char *) * 200);
		tmp = tab;
		memset(tab, 'e', 5);
		bzero(tab, 5);
		test += strcmp(tab, tmp);
		if (test == 0)
			printf("memset = juste\n");
		else
			printf("memset = FAUX\n)");
//isalnum
		test = 0;
		i = -2000;
		while (i < 3000)
			if (ft_isalnum(i) != isalnum(i))
				test = 1;
		if (test == 0)
			printf("isalnum = juste\n");
		else
			printf("isalnum = FAUX\n)");
//isalpha
		test = 0;
		i = -2000;
		while (i < 3000)
			if (ft_isascii(i) != isascii(i))
				test = 1;
		if (test == 0)
			printf("isascii = juste\n");
		else
			printf("isascii = FAUX\n)");
//isascii
		test = 0;
		i = -2000;
		while (i < 3000)
			if (ft_isascii(i) != isascii(i))
				test = 1;
		if (test == 0)
			printf("isascii = juste\n");
		else
			printf("isascii = FAUX\n)");

//isdigit
		test = 0;
		i = -2000;
		while (i < 3000)
			if (ft_isdigit(i) != isdigit(i))
				test = 1;
		if (test == 0)
			printf("isdigit = juste\n");
		else
			printf("isdigit = FAUX\n)");
//isprint
		test = 0;
		i = -2000;
		while (i < 3000)
			if (ft_isprint(i) != isprint(i))
				test = 1;
		if (test == 0)
			printf("isprint = juste\n");
		else
			printf("isprint = FAUX\n)");
//memccpy
		test = 0;
		if (ft_memccpy(tab, "zyxwvutsrqponmlkjihgfedcba", 'r', 20) != memccpy(tab, "zyxwvutsrqponmlkjihgfedcba", 'r', 20)
			||	ft_memccpy(tab, "zyxwvutsrqponmlkjihgfedcba", 'r', 3) != memccpy(tab, "zyxwvutsrqponmlkjihgfedcba", 'r', 3)
				|| ft_memccpy(tab, "zyxwvutsrqponmlkjihgfedcba", 'a', 26) != memccpy(tab, "zyxwvutsrqponmlkjihgfedcba", 'a', 26)
					|| ft_memccpy(tab, "zyxwvuzyxwvu", 'x', 20) != memccpy(tab, "zyxwvuzyxwvu", 'x', 20))
			test = 1;
		if (test == 0)
			printf("isprint = juste\n");
		else
			printf("isprint = FAUX\n)");
//memchr
		test = 0;
		test += strcmp(ft_memchr("bonjour", 'b', 4), memchr("bonjour", 'b', 4));
		test += strcmp(ft_memchr("bonjour", 'o', 7), memchr("bonjour", 'o', 7));
		test += strcmp(ft_memchr("bonjour", 'n', 4), memchr("bonjour", 'n', 4));
		test += strcmp(ft_memchr("bonjour", 'j', 6), memchr("bonjour", 'j', 6));
		test += strcmp(ft_memchr("bonjour", 's', 7), memchr("bonjour", 's', 7));

		int tab2[7] = {-49, 49, 1, -1, 0, -2, 2};

		test += strcmp(ft_memchr(tab2, -1, 7), memchr(tab2, -1, 7));
		if (test == 0)
			printf("memchr = juste\n");
		else
			printf("memchr = FAUX\n)");
//memcmp
		test = 0;
		if (ft_memcmp("salut", "salut", 5) == memcmp("salut", "salut", 5) || ft_memcmp("t\200", "t\0", 2) == memcmp("t\200", "t\0", 2)
			|| ft_memcmp("testss", "test", 5) == memcmp("testss", "test", 5) || ft_memcmp("test", "tEst", 4) == memcmp("test", "tEst", 4)
				|| ft_memcmp("", "test", 4) == memcmp("", "test", 4) || ft_memcmp("test", "", 4) == memcmp("test", "", 4)
					|| ft_memcmp("abcdefghij", "abcdefgxyz", 7) == memcmp("abcdefghij", "abcdefgxyz", 7)
						|| ft_memcmp("abcdefgh", "abcdwxyz", 6) == memcmp("abcdefgh", "abcdwxyz", 6)
							|| ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0) == memcmp("zyxbcdefgh", "abcdefgxyz", 0))
			test++;
		if (test == 0)
			printf("memcmp = juste\n");
		else
			printf("memcmp = FAUX\n)");
//memcpy
		test = 0;
		test += strcmp(ft_memcpy(tab, "zyxwvutsrqponmlkjihgfedcba", 14), memcpy(tab, "zyxwvutsrqponmlkjihgfedcba", 14));
		test += strcmp(ft_memcpy(tab, "zyxwvutst", 0), memcpy(tab, "zyxwvutst", 0));
		test += strcmp(ft_memcpy(tab, "zy\0xw\0vu\0\0tsr", 11), memcpy(tab, "zy\0xw\0vu\0\0tsr", 11));

//memmove
		test = 0;
		char	src[] = "lorem ipsum dolor sit amet";
		char	*dest;

		test += strcmp(ft_memmove(dest, "consectetur", 5), memmove(dest, "consectetur", 5));
		test += strcmp(ft_memmove(dest, "con\0sec\0\0te\0tur", 10), memmove(dest, "con\0sec\0\0te\0tur", 10));
		test += strcmp(ft_memmove(dest, src, 8), memmove(dest, src, 8));
		test += strcmp(ft_memmove(src, dest, 8), memmove(src, dest, 8));
		test += strcmp(ft_memmove(src, dest, 0), memmove(src, dest, 0));
		if (test == 0)
			printf("memcmp = juste\n");
		else
			printf("memcmp = FAUX\n)");
}
return (0);
}
