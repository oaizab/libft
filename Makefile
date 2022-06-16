SRCS	=	ft_abs.c \
			ft_append_char.c \
			ft_append_str.c \
			ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_fprintf.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_lstadd_back_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstmap_bonus.c \
			ft_lstnew_bonus.c \
			ft_lstsize_bonus.c \
			ft_max.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_min.c \
			ft_printf.c \
			ft_printf_check.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_address_fd.c \
			ft_putnbr_addresse.c \
			ft_putnbr_base.c \
			ft_putnbr_base_fd.c \
			ft_putnbr_fd.c \
			ft_putnbr_unsigned.c \
			ft_putnbr_unsigned_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_realloc.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			get_next_line.c \
			ft_strcmp.c

ODIR	=	obj
OBJS	=	$(addprefix $(ODIR)/,$(SRCS:.c=.o))

IDIR	=	inc
INCL	=	libft.h
HEADER	=	$(addprefix $(IDIR)/,$(INCL))
NAME	=	libft.a
CC		=	cc
RM		=	rm -rf
CFLAGS	=	-Wall -Wextra -Werror -g
AR		=	ar rcs
SDIR	=	src
OUTPUT	=	lib

# ----------------Colors------------------------------------------------------
BLUE	=	\033[0;34m
CYAN	=	\033[0;36m
GREEN	=	\033[0;32m
YELLOW	=	\033[1;33m
CLEAR	=	\033[m
# ----------------------------------------------------------------------------

all:		$(NAME)

$(ODIR)/%.o: $(SDIR)/%.c $(HEADER)
			@mkdir -p $(@D)
			@$(CC) $(CFLAGS) -I$(IDIR) -c $< -o $@

$(NAME):	$(OBJS)
			@mkdir -p $(OUTPUT)
			@$(AR) $(OUTPUT)/$(NAME) $(OBJS)



clean:
			@$(RM) $(OBJS) $(ODIR)

fclean:		clean
			@$(RM) $(OUTPUT)/$(NAME) $(OUTPUT)

re:			fclean all

.PHONY:		all clean fclean re