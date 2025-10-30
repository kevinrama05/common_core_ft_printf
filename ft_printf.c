#include <stdarg.h>

typedef enum e_type
{
    TYPE_CHAR,
    TYPE_STRING,
    TYPE_INT,
    TYPE_UINT,
    TYPE_HEX,
    TYPE_PTR,
} t_type;

typedef union u_data
{
    char c;
    char *s;
    int i;
    unsigned int u;
    void *p;
} t_data;

typedef struct s_value
{
    t_type type;
    t_data data;
} t_value;

int ft_printf(const char *format, ...)
{
    va_list args;
    int i;
    int printed;

    va_start(args, format);
    printed = 0;
    i = 0;
    while(format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            t_value v = va_arg(args, t_value);
            if (format[i + 1] == 'c' && v.type == TYPE_CHAR)
                ft_putchar(&printed, v.data.c);
            else if ((format[i + 1] == 'i' || format[i + 1] == 'd') && v.type)
                ft_putnum(&printed, v.data.i);
            else if (format[i + i] == 's' && v.type == TYPE_STRING)
                ft_putstr(&printed, v.data.s);
            else if (format[i + 1] == 'p' && v.type == TYPE_PTR)
                ft_putptr(&printed, v.data.p);
            else if (format[i + 1] == 'u' && v.type == TYPE_UINT)
                ft_putu(&printed, v.data.u);
            else if (format[i + 1] == 'x' && v.type == TYPE_HEX)
                ft_print_hex(&printed, v.data.u);
            else if (format[i + 1] == 'X' && v.type == TYPE_HEX)
                ft_printX(&)
        }
    }
}