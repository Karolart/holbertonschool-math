#include "fibonacci.h"
/**
 * Fibonnaci - function return a pointer with the head of
 * the fibonacci linked list
 *
 * Return: fibonacci linked list head
 */
t_cell *Fibonnaci()
{
    t_cell *new, *head;
    float x1 = 0, x2 = 1, n1 = 0, n2 = 1;

    head = NULL;
 
    while (x2 != x1)
    {
        new = malloc(sizeof(t_cell));
        if (new == NULL)
        {
            return (NULL);
        }
        new->elt = n2;
        new->next = head;
        head = new;

        if (n1 != 0)
        {
                x1 = n1 / (n2 - n1);
                x2 = n2 / n1;
        }
      
        n2 += n1;
        n1 = n2 - n1;
    }

    return (head);
}
/**
 * gold_number - Function that Return the Golden Ratio
 * of the fibonacci serie
 *
 * @head: Parameter pointer to the head of the fibonacci
 * linked list
 *
 * Return: Return the Golden Ratio of the fibonacci serie
 */
double gold_number(t_cell *head)
{
        t_cell *tmp;
        double gr, gr1, gr2;

        tmp = head;
        gr1 = tmp->elt;
        gr2 = (tmp->next)->elt;
        gr = gr1 / gr2;

        return (gr);
}
