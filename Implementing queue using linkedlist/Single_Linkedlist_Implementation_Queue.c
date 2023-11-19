/*@Amgad Diploma_C21-StackandQueue_19November2023*/
/*Queue_Implementation_Using_Linkedlist_Driver*/
/*Auther:     Alaa Ashraf
**Date:       19November2023
**LastUpdate: 19November2023*/



#include <stdio.h>
#include <stdlib.h>
#include "types.h"

#include "Linkedlist.h"
#include "Single_Linkedlist_Implementation_Queue.h"

/************************************************* IMPLEMENTING QUEUE USING A SINGLE LINKEDLIST *************************************************/
/*Global Variables*/


//Index of FRONT and REAR
Node_t *  FRONT;   
Node_t *  REAR;



/*Global Functions Implementation*/
/**************************************************************************/
/*Function:      Initialization of FRONT and REAR pointers
* Parameters:    void      //as FRONT and REAR pointers are global here
* Return:        void*/
void Initialization_Queue(){
    //initialize FRONT and REAR with NULL means, at beginning, the queue is empty
    FRONT = INITIAL_VALUE;
    REAR = INITIAL_VALUE;

}




/**************************************************************************/
/*Function:      Check on if Queue is EMPTY or not
* Parameters:    void      //as FRONT and REAR pointers are global here
* Return:        EMPTY enum (One if Is_EMPTY and Zero if Not)*/
EMPTY IS_EMPTY_Queue(){
    //Check if the queue is empty
    EMPTY Check=NOT_EMPTY;
    if(FRONT == INITIAL_VALUE){
        Check = IS_EMPTY;
    }else{
        Check =NOT_EMPTY;
    }
    return Check;
}




/**************************************************************************/
/*Function:      Insertion new data in Queue
* Parameters:   -Data [u16]: the data wanted to insert in Queue
* Return:        void*/
void EnQueue(u16 Data){
    
    //Firstly, Initialize temp node
    Node_t * temp = (Node_t *) malloc(sizeof(Node_t));
    temp->info=Data;
    temp->link =NULL;

    //Check on first insertion in queue
    EMPTY Check= IS_EMPTY_Queue();
    if(Check == IS_EMPTY){
        //change FRONT pointer
        FRONT = temp;
    }else{
        REAR->link =temp;  //insert temp at end of list
    }
    //Update REAR pointer
        REAR =temp;

}


/**************************************************************************/
/*Function:      Deletion first input data from the Queue after Reading it
* Parameters:   void
* Return:        The data of first input element*/
s16 DeQueue(){
    
    //Firstly, Check if the queue is empty
    EMPTY Check= IS_EMPTY_Queue();
    s16 Data;
    if(Check == NOT_EMPTY){
        //Retrieve the Data of first input element at FRONT index 
        Data = FRONT->info ;
        //update FRONT pointer for deleting the data
        FRONT = FRONT->link;  //as FRONT losts the index of this data so it doesn't aviable (as Deletion) 
    }else{

        Data = UNDERFLOW_VALUE ;
    }

    return Data;
}



/**************************************************************************/
/*Function:      Reading first input data from the Queue without deleting it
* Parameters:   void
* Return:        The data of first input element*/
s16 PEEK_From_Queue(){
    
    //Firstly, Check if the queue is empty
    EMPTY Check= IS_EMPTY_Queue();
    s16 Data;
    if(Check == NOT_EMPTY){
        //Reading the Data of first input element at FRONT index 
        Data = FRONT->info ;
    }else{

        Data= UNDERFLOW_VALUE;
    }

    return Data;
}


/**************************************************************************/
/*Function:      Displaying the value of first input data which is returned from DeQueue or PEEK function
* Parameters:   -first_data [s16]: returned data from POP or PEEK function
* Return:        void*/
void Displaying_Front_Value(s16 first_data){
    
    if(first_data == UNDERFLOW_VALUE){
        printf("\nthe queue is empty and returning data from it is UNDERFLOW_VALUE\n");
    }else{
        printf("\nthe first input data in queue = %d\n",first_data);
    }

}




/**************************************************************************/
/*Function:      Calculating the number of elements in queue
* Parameters:    void
* Return:        the number of elements in queue*/
u16 Size_Of_Queue(){
    //As queue is a list and FRONT pointer points to first node, 
    //we can use Count_Nodes() function to count elements in queue
    u16 queue_elements =Count_Nodes(FRONT);
    return queue_elements;
}



/**************************************************************************/
/*Function:      Displaying the data of the Queue
* Parameters:   void
* Return:        void*/
void Display_Queue(){
    
    //Firstly, Check if the queue is empty
    EMPTY Check= IS_EMPTY_Queue();

    if(Check == NOT_EMPTY){
        //Display the data
        printf("\nThe data in the queue\n");
        //As queue is a list and FRONT pointer points to first node, 
        //we can use Display_List() function to display data in queue      
        Display_List(FRONT);
    }else{

        printf("\nThe queue is empty, there is no data exists in queue\n");
    }

}