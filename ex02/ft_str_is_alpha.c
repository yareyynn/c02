int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (65 <= str[i] && str[i] <= 90 || 97 <= str[i] && str[i] <= 122)
            i++;
            if (str[i] == '\0')
                return 1;
        else
            return 0;
    }
}
