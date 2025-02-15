#include <stdio.h>
#define MAX 4
int queue[MAX];
int first = 0, last = 0;  
void enqueue() {
    int data;
    if (last == MAX) {  
        printf("Queue Overflow.\n");
    } else {
        printf("Enter the data: ");
        scanf("%d", &data);
        queue[last] = data;
        last++;  
    }
}
void dequeue() {
    if (first == last) {  
        printf("Queue Underflow.\n");
    } else {
        printf("Queue removed data = %d\n", queue[first]);
        first++; 
    }
}
void display() {
    if (first == last) {  
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = first; i < last; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
int main() {
    int option;
    while (1) {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter the option: ");
        scanf("%d", &option);

        switch (option) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: return 0;  
            default: printf("Enter a valid option.\n");
        }
    }
    return 0;
}
