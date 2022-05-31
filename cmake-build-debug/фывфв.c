int main(){
    Item *ptr=string->head;
    int k=0;
    int mx=0;
    Item *next=ptr->next;
    while (ptr){
        if (ptr->data%2==1){
            k++;
            if (ptr->data>mx)
                    mx=ptr->data;

        }
        ptr=next;
        next=ptr->next;
    }
    Item *new_head=malloc(sizeof (Item*));
    new_head->data=k;
    new_head->prev=NULL;
    new_head->next=string->head;
    string->head->prev=new_head;
    string->head=new_head;
    Item *new_tale=malloc(sizeof (Item*));
    new_tale->data=mx;
    new_tale->next=NULL;
    new_tale->prev=string->tale;
    string->tale->next=new_tale;
    string->tale=new_tale;
}
1234567  123456712...

int main(String* string){
    Item*ptr=string->head;
    Item *next=ptr->next;
    while (ptr){
        if (ptr->next==NULL){
            printf("NO");
        }
        if (ptr->next==string->head)
            prinf("YES")
        ptr=next;
        next=ptr->next;
    }
}

typedef struct List{
    Item *prev;
    Item *next;
    char data;
}List;

void add(Item *head,char data,int index)
{
    Item *ptr=head;
    Item *new=malloc(sizeof(Item*));
    new->data=data;
    int i=0;
    while (ptr){
        i+=1;
        if (i==index)
        {
            ptr->prev->next=new;
            new->prev=ptr->prev;
            new->next=ptr;
            ptr->prev=new;

        }
    }
}

typedef struct List{
    Item *prev;
    Item *next;
    char data;
}List;

void delete(Item *head){
    Item*ptr=string->head;
    Item *next=ptr->next;
    int mx=0;
    while (ptr){
        if (ptr->data>mx)
            mx=ptr->data;
        ptr=next;
        next=ptr->next;
    }
    ptr->string->head;
    next=ptr->next;
    while (ptr){
        if (ptr->data==mx) {
            if (next == NULL) {
                ptr->prev->next = next;
                free(ptr);
            }
            else {
                if (ptr->prev == NULL) {
                    ptr->next->prev = ptr->prev;
                    free(ptr);
                }

                ptr->prev->next = next;
                ptr->next->prev = ptr->prev;
                free(ptr);
            }
        }
        ptr=next;
        next=ptr->next;
    }
}
void move(Item *head,Item *tale,int index)// String *string
{
    Item *ptr=head;
    Item *next=ptr->next;
    int i=0;
    Item *nd=malloc(sizeof (Item *));
    while (ptr){
        i+=1;

        if (i==index)
        {
            ptr->prev->next=next;
            ptr->next->prev=ptr->prev;//если двусвязанный
            //Если 2связанный
            ptr->next=NULL;
            ptr->prev=tale;
            tale->next=ptr;
            //Если 1связанный
            nd=ptr;
        }
        //Если 1связанный
        if (next==NULL){
            ptr->next=nd;
            nd->next=NULL;
        }
        ptr=next;
        next=ptr->next;


    }
}

