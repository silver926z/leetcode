#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list{
    int no;
    char name[256];
    struct list *next;
} linked_list;
int main(int argc, char **argv){
    int i,num;
    char str[256];

    linked_list *head = NULL;
    linked_list *prev = NULL;
    linked_list *current = NULL;
    
    while(1){
        current = (linked_list*)calloc(1,sizeof(linked_list));

        printf("scan no\n");
        scanf("%d",&num);
        if(num == 0)
            break;
        printf("scan name\n");
        scanf("%s",str);

        current -> no = num;
        strcpy(current->name,str);

        if(head == NULL)
            head = current;
        else
            prev->next = current;
        prev = current;
    }

    //display linked list
    current = head;
    while(current != NULL){
        printf("number : %d\n",current->no);
        printf("[%s]\n",current->name);
        current = current->next;
    }

    // free linked list
    current = head;
    while(current != NULL) {
      prev = current;
      current = current->next;
      free(prev);
    }
    return 0;
}