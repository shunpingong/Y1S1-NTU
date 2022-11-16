	/*edit*/

#include <stdio.h>
#include <string.h>
#include <string.h>
#define MAX 5


	/*end_edit*/
	/*edit*/
/* Write your code here */
typedef struct //new data type
{
    int roomID; //1 to MAX
    int status; //1-occupied 0-available
    char customerName[20];
} Room;

void listOccupiedRooms(Room *rmptr,int size);
void assignRoom(Room *rmptr,int size);
void removeRoom(Room *rmptr, int size);
void findCustomer(Room *rmptr, int size);

int main(){
    Room r[MAX];
    for (int j=0;j<MAX;j++){
        r[j].status=0; //intialise status 0 : available
        strcpy(r[j].customerName,""); //initialise to ensure no junk values
    }

    int choice,size=0;
    printf("NTU HOTEL ROOM RESERVATION PROGRAM:\n");
    printf("1: listOccupiedRooms()\n");
    printf("2: assignRoom()\n");
    printf("3: removeRoom()\n");
    printf("4: findCustomer()\n");
    printf("5: quit\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1: //list rooms
                listOccupiedRooms(r,size);
                break;
            case 2: //assign rooms
                assignRoom(r,size);
                if (size!=MAX)
                    size++;
                break;
            case 3: //remove room
                removeRoom(r,size);
                if (size!=0)
                    size--;
                break;
            case 4: //find customer
                findCustomer(r,size);
                break;
            }
    } while (choice !=5);
return 0;
}

void listOccupiedRooms(Room *rmptr,int size){
    printf("listOccupiedRooms():\n");
    if (size==0){
    printf("The hotel is empty\n");
    }
    else{
        for (int i=0;i<MAX;i++){
                if (*((rmptr+i)->customerName) != '\0' && (*(rmptr+i)).status != 0){
                printf("roomID: %d\n",(rmptr+i)->roomID);
                printf("customer name: %s\n",(rmptr+i)->customerName);
                }
        }
    }
}

void assignRoom(Room *rmptr,int size){
    char dummychar,*p;
    int id=0;
    printf("assignRoom():\n");
    if (size==MAX){
        printf("The hotel is full\n");
    }
    else{
        printf("Enter a roomID between 1 and %d:\n",MAX);
        scanf("%d", &id);
        while (id>MAX || id<1){
            printf("Enter a roomID between 1 and %d:\n",MAX);
            scanf("%d", &id);
        }
        while ((rmptr+id-1)->status == 1){
            printf("Occupied! Enter another roomID\n");
            printf("Enter a roomID between 1 and %d:\n",MAX);
            scanf("%d", &id);
            while (id>MAX || id<1){
                printf("Enter a roomID between 1 and %d\n",MAX);
                scanf("%d", &id);
            }
        }
        (rmptr+id-1)->roomID = id;
        (rmptr+id-1)->status = 1; //occupied
        scanf("%c",&dummychar); //get rid of \n
        printf("Enter customer name: \n");
        fgets((rmptr+id-1)->customerName, 20, stdin);
        if (p=strchr((rmptr+id-1)->customerName,'\n')) *p = '\0';
        printf("The room has been assigned successfully\n");
    }
}


void removeRoom(Room *rmptr, int size){
    int id=0;
    printf("removeRoom():\n");
    if (size == 0){
        printf("All the rooms are empty\n");
    }
    else{
        printf("Enter a roomID between 1 and %d:\n",MAX);
        scanf("%d", &id);

        while (id>MAX || id<1){
            printf("Enter a roomID between 1 and %d:\n",MAX);
            scanf("%d", &id);
        }
        while ((rmptr+id-1)->status != 1){
                if (id>MAX || id<1){
                    printf("Enter a roomID between 1 and %d:\n",MAX);
                    scanf("%d", &id);
                    }
            printf("Empty! Enter another roomID for removal\n");
            printf("Enter a roomID between 1 and %d:\n",MAX);
            scanf("%d", &id);
        }
        (rmptr+id-1)->status = 0; //status = 0 : room available again
        strcpy((rmptr+id-1)->customerName,""); //set it to empty string/clear the name
        printf("Removal is successful\n");
    }
}


void findCustomer(Room *rmptr, int size){
    printf("findCustomer():\n");
    char dummychar;
    char t[20],*p; //t=target
    int found=0,i=0;
    scanf("%c",&dummychar);
    printf("Enter customer name: \n");
    fgets(t, 20, stdin);
    if (p=strchr(t,'\n')) *p = '\0';

    for (i=0;i<MAX;i++){
        if (strcasecmp((rmptr+i)->customerName,t)==0 && ((rmptr+i)->status) ==1){ //name the same , status occupied
                printf("The target customer name is found\n");
                printf("roomID: %d\n",(rmptr+i)->roomID);
                printf("customer name: %s\n",(rmptr+i)->customerName);
                found =1;
                break;
        }
    }
    if (found!=1)
        printf("The target customer name is not found\n");
}
	/*end_edit*/