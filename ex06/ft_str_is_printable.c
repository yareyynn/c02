int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (32 <= str[i] && str[i] <= 127)
            i++;
            if (str[i] == '\0')
                return 1;
        else
            return 0;
    }
}
