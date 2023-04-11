/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alarroyo <alarroyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:58:53 by alarroyo          #+#    #+#             */
/*   Updated: 2022/10/09 17:58:24 by alarroyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It counts the number of words in a string
 * 
 * @param s the string to be split
 * @param c the delimiter
 * 
 * @return The number of words in the string.
 */
static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != 0)
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') == 1
			&& (s[i] == c || s[i] == '\0') == 0)
			words++;
		i++;
	}
	return (words);
}

/**
 * It copies a word from a string into a new string
 * 
 * @param d destination
 * @param s The string to be split.
 * @param c the character to split on
 */
static void	write_word(char *d, const char *s, char c)
{
	int	i;

	i = 0;
	while ((s[i] == c || s[i] == '\0') == 0)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
}

/**
 * It frees the memory allocated to the 2D array 
 * of strings, and returns -1
 * 
 * @param aux the array of strings that will be used 
 * 				to store the lines of the file
 * @param j the number of lines in the file
 * 
 * @return the value of j.
 */
static int	ft_free(char **aux, int j)
{
	while (j-- > 0)
		free(aux[j]);
	return (-1);
}

/**
 * It counts the number of words in the string, 
 * allocates memory for the matrix, and then writes the
 * words into the matrix
 * 
 * @param matrix the matrix that will be returned
 * @param s The string to be split.
 * @param c the delimiter
 * 
 * @return The number of words in the string.
 */
static int	write_split(char **matrix, const char *s, char c)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c || s[i] == '\0') == 1)
			i++;
		else
		{
			j = 0;
			while ((s[i + j] == c || s[i + j] == '\0') == 0)
				j++;
			matrix[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (matrix[word] == NULL)
				return (ft_free(matrix, word - 1));
			write_word(matrix[word], s + i, c);
			i += j;
			word++;
		}
	}
	return (0);
}

/**
 * It counts the number of words in the string, 
 * allocates memory for the array of strings, and then
 * writes the strings into the array
 * 
 * @param s The string to be split.
 * @param c the character to split the string by
 * 
 * @return A pointer to a pointer to a char.
 */
char	**ft_split(const char *s, char c)
{
	char	**aux;
	int		words;

	words = count_words(s, c);
	aux = (char **)malloc(sizeof(char *) * (words + 1));
	if (aux == NULL)
		return (NULL);
	aux[words] = 0;
	if (write_split(aux, s, c) == -1)
		return (NULL);
	return (aux);
}
