// Queue is an abstract linear data structure, it is an ordered listed which works on the principle of first in first out FIFO 
 // here insertion would be done on the last node (rear or tail) we use term enqueue for insertion 
 // and deletion would be done on first node (front or head) we use dequeue for delete operation 
  
 #include <iostream> 
 using namespace std; 
  
 struct Queue 
 { 
     int data; 
     struct Queue *next; 
 }; 
  
 struct Queue *FRONT = NULL; 
 struct Queue *REAR = NULL; 
  
 void Enqueue() 
 { 
     struct Queue *temp; 
     temp = new (struct Queue[sizeof(struct Queue)]); 
     cout << "Enter data: "; 
     cin >> temp->data; 
  
     if (FRONT == NULL) 
     { 
         FRONT = temp; 
         REAR = temp; 
     } 
     else 
     { 
         REAR->next = temp; 
         REAR = temp; 
         temp->next = NULL; 
     } 
 } 
  
 void Dequeue() 
 { 
     if (FRONT == NULL && REAR == NULL) 
     { 
         cout << "The Queue is empty:(\nTry enqueuing some elements" << endl; 
     } 
     else 
     { 
         struct Queue *temp = FRONT; 
         cout << "Dequeuing " << FRONT->data << endl; 
         FRONT = FRONT->next; 
         free(temp); 
     } 
 } 
  
 void front() 
 { 
     if (FRONT == NULL && REAR == NULL) 
     { 
         cout << "The Queue is empty:(\nTry enqueuing some elements" << endl; 
     } 
     else 
     { 
         cout << "The element at front is " << FRONT->data << endl; 
     } 
 } 
  
 void isEmpty() 
 { 
     if (FRONT == NULL && REAR == NULL) 
     { 
         cout << "The Queue is empty:(\nTry enqueuing some elements" << endl; 
     } 
     else 
     { 
         cout << "The Queue is not empty" << endl; 
     } 
 } 
  
 void display() 
 { 
     if (FRONT == NULL && REAR == NULL) 
     { 
         cout << "The Queue is empty:(\nTry enqueuing some elements" << endl; 
     } 
     else 
     { 
         struct Queue *temp = FRONT; 
         while (temp != NULL) 
         { 
             cout << "The data is--> " << temp->data << endl; 
             temp = temp->next; 
         } 
     } 
 } 
  
 int main() 
 { 
     int choice; 
     while (choice != 0) 
     { 
         cout << "\nEnter choice--> " << endl 
              << "1 to Enqueue " << endl 
              << "2 to Dequeue " << endl 
              << "3 to peak " << endl 
              << "4 to display " << endl 
              << "5 to check is Queue is empty " << endl 
              << "0 to end " << endl; 
         cin >> choice; 
  
         switch (choice) 
         { 
         case 1: 
             Enqueue(); 
             break; 
         case 2: 
             Dequeue(); 
             break; 
         case 3: 
             front(); 
             break; 
         case 4: 
             display(); 
             break; 
         case 5: 
             isEmpty(); 
             break; 
         case 0: 
             cout << "Ending program bye"; 
             break; 
         default: 
             cout << "Invalid input try again!!!!"; 
         } 
     } 
  
     return 0; 
 }
