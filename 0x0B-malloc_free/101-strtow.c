#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * is_space - main entry
 * @c: input
 * Return: c when successful
 */

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - main entry
 *@str: string
 *Return: number of words
 */

int count_words(char *str)
{
	int num_words, in_word;
	char *p;

	num_words = 0;
	in_word = 0;
	for (p = str; *p; p++)
	{
		if (!is_space(*p))
		{
			if (!in_word)
			{
				num_words++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
	}
	return (num_words);
}

/**
 * split_words - function that splits word
 * @str: string
 * @num_words: number of words
 *Return: words when successful
 */

char **split_words(char *str, int num_words)
{
	char **words, *p, *start;
	int word_len, i, j;

	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	for (p = str; *p; p++)
	{
		if (!is_space(*p))
		{
			start = p;
			while (*p && !is_space(*p))
				p++;
			word_len = p - start;
			words[i] = (char *)malloc((word_len + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			strncpy(words[i], start, word_len);
			words[i][word_len] = '\0';
			i++;
		}
	}
	words[num_words] = NULL;
	return (words);
}
/**
 * strtow - main entry
 * @str: string
 * Return: split_words, str and num_words when successful
 */

char **strtow(char *str)
{
	int num_words;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	return (split_words(str, num_words));
}
