char *_strcat(char *dest, char *src)
{
	int j, k, l = 0;

	for (k = 0; dest[k] != '\0'; k++)
	{
		l++;

	}

	for (k = l, j = 0; src[j] != '\0'; j++, k++)
	{
		dest[k] = src[j];
	}
	dest[k] = '\0';

	return (dest);

}
