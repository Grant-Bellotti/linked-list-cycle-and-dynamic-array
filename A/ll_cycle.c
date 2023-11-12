/*
ll_cycle.c - checks if cycle in linked list

input: linked list head
output: 1 or 0 

usage: ./ll_cycle

Grant Bellotti, 1939767, gbellott@ucsc.edu
*/
#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node *fast = head;
    node *slow = head;
    
    while(fast != NULL && fast ->next != NULL) { // fast increments by 2 and slow incements by 
        fast = fast->next->next;
        slow = slow->next;
        
        if(fast == slow) // if fast and slow are at same node, theres a cycle
            return 1;
    }
    
    // if reaches NULL, theres no cycle
    return 0;
}
