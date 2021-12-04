#include <stdio.h>
#include "libft.h"

#define FT_ATOI

#ifdef FT_LSTADD_BACK
	int	main(void)
	{
		t_list	*head;
		head = ft_lstnew("first");
		head->next = ft_lstnew("second");
		head->next->next = ft_lstnew("third");
		ft_lstadd_back(&head, ft_lstnew("fourth"));
		ft_lstadd_back(&head, ft_lstnew("five"));
		printlist(head);
	}
#endif

#ifdef FT_ATOI
    int main(int argc, char const *argv[])
    {
        printf("%d", ft_atoi(argv[1]));
        return 0;
    }
#endif

#ifdef FT_ITOA
    int main(int argc, char const *argv[])
    {
        printf("%s", ft_itoa(atoi(argv[1])));
        return 0;
    }
#endif

#ifdef FT_LSTADD_FRONT
    int	main(void)
    {
        t_list *head;
        head = ft_lstnew("first");
        head->next = ft_lstnew("socend");
        head->next->next = ft_lstnew("third");
        ft_lstadd_back(&head, ft_lstnew("fourth"));
        while(head)
        {
            printf("%s ", head->content);
            head = head->next;
        }
    }
#endif

#ifdef FT_LSTDELONE

void	ft_del(void *content)
{
	free(content);
}

int main()
{
	t_list          *elem = NULL;
	char			*str = strdup("lorem");
	char            *str2 = strdup("ipsum");
	char            *str3 = strdup("dolor");
	char            *str4 = strdup("sit");
	ft_lstadd_front(&elem, ft_lstnew(str));
	ft_lstadd_front(&elem, ft_lstnew(str2));
	ft_lstadd_front(&elem, ft_lstnew(str4));
	ft_lstadd_front(&elem, ft_lstnew(str3));
	t_list *tmp =elem;
	while (tmp != NULL)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
	ft_lstdelone(elem , &ft_del);
	tmp =elem;
	while (tmp != NULL)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
}
#endif


#ifdef FT_LSTNEW

int main(void)
{
	printf("%s", (char *)ft_lstnew("test")->content);
}
#endif


#ifdef FT_LSTSIZE
int	main(void)
{
	t_list *head;
	head = ft_lstnew("first");
	head->next = ft_lstnew("socend");
	head->next->next = ft_lstnew("third");
	ft_lstadd_front(&head, ft_lstnew("fourth"));
	printf("%d", ft_lstsize(head));
}
#endif


#ifdef FT_MEMMOVE
int main()
{
    char str[10] = "TEST";
    char *first, *second;
    first = str;
    second = str;
	char str2[10] = "TEST";
    char *src, *dst;
    src = str2;
    dst = str2;
    printf("Original string :%s\n ", str);
    // when overlap it start from first position
    ft_memmove(dst + 2, src, 4);
    printf("memmove overlap : %s\n ", dst);
	for(int i=0;i<strlen(str);i++)
	{
		printf("\n%c's address : %p",str[i],&str[i]);
	}
}

#endif

#ifdef FT_STRLCAT
int main()
{
	printf("%lu\n", ft_strlcat(0, 0, 0));
}
#endif


#ifdef FT_STRMAPI
char	f(unsigned int i, char c)
{
	char	str;
	i = 1;
	str = c + i;
	return (str);
}
int main(int argc, char const *argv[])
{
	char str1[] = "abc";
	char *s2;
	s2 = ft_strmapi(str1, *f);
	printf("%s", s2);
	return 0;
}
#endif

#ifdef FT_STRNCMP
int main(int argc, char const *argv[])
{
	printf("%d", strncmp("abc", "abz", 3));
	return 0;
}
#endif