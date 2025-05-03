#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *res;
    t_list *new_node;
    void *content;

    if (!lst || !f)
        return (NULL);
    res = NULL;
    while (lst)
    {
        content = f(lst->content);
        new_node = ft_lstnew(content);
        if (!new_node)
        {
            del(content);
            ft_lstclear(&res, del);
            return (NULL);
        }
        ft_lstadd_back(&res, new_node);
        lst = lst->next;
    }
    return (res);
}
