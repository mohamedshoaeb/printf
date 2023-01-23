#include "main.h"
/**
 * print_str - send string to buffer
 *
 * @arguments: input string.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer.
 *
 * Return: number of chars in string on success
 * 6 on str = null
 */
int print_str(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(arguments , char *);

	if(str == NULL)
	{
		for (i=0; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (6);
	}
	for (i=0; str[i]; i++)
		ibuf = handl_buf(buf, str[i], i++);
	return (i);
}
