int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int x;

	a = 0;
	x = ft_strlen(src);
	if(size != 0)
	{
		while (src[a] != '\0' && a < size-1)
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (x);
}
