  head = newnode;
        } else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }
}

/* Insert at End */
void insert() {
    int value;
    struct node *newnode, *temp;
    
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter value to insert: ");
    scanf("%d", &value);
    
    newnode->data = value;
    newnode->next = NULL;
    
    if (head == NULL) {
        head = newnode;
    } else {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
}

/* Delete a Node */
void deletee() {
    int value;
    struct node *temp, *prev;
    
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    
    printf("Enter value to delete: ");
    scanf("%d", &value);
    
    temp = head;
    
    if (temp->data == value) {
        head = temp->next;
        free(temp);
        printf("Node deleted\n");
        return;
    }
    
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Value not found\n");
    } else {
        prev->next = temp->next;
        free(temp);
        printf("Node deleted\n");
    }
}
/* Traverse the List */
void traverse() {
    struct node *temp;
    
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    
    temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");}
