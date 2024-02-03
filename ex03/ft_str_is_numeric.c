int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (48 <= str[i] && str[i] <= 57)
            i++;
            if (str[i] == '\0')
                return 1;
        else
            return 0;
    }
}
