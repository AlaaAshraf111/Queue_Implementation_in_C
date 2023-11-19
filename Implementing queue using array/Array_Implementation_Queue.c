/*@Amgad Diploma_C21-StackandQueue_15November2023*/
/*Queue_Implementation_Using_Array_Driver*/
/*Auther:     Alaa Ashraf
**Date:       15November2023
**LastUpdate: 15November2023*/


#include <stdio.h>
#include "types.h"
#include "Array_Implementation_Queue.h"

/************************************************* IMPLEMENTING QUEUE USING AN ARRAY *************************************************/
/*Global Variables*/


//Index of FRONT and REAR
s16  FRONT;   
s16  REAR;



/*Global Functions Prototype*/
/**************************************************************************/
/*Function:      Initialization of FRONT and REAR Index
* Parameters:   -u16[Arr_Size]: the size of the allocated array for queue
* Return:        void*/
void Initialization_Queue(u16 Arr_Size){
    //initialize FRONT and REAR with -1 means, at beginning, the queue is empty
    FRONT = INITIAL_VALUE;
    REAR = INITIAL_VALUE;

}

/**************************************************************************/
/*Function:      Check on if Queue is FULL or not
* Parameters:   -u16[Arr_Size]: the size of the allocated array for queue
* Return:        FULL enum (One if Is_Full and Zero if Not)*/
FULL IS_FULL_Queue(u16 Arr_Size){
    //Check if the queue is full
    FULL Check=NOT_FULL;
    if(REAR == (Arr_Size-1)){
        Check = IS_FULL;
    }else{
        Check =NOT_FULL;
    }
    return Check;
}




/**************************************************************************/
/*Function:      Check on if Queue is EMPTY or not
* Parameters:   -u16[Arr_Size]: the size of the allocated array for queue
* Return:        EMPTY enum (One if Is_EMPTY and Zero if Not)*/
EMPTY IS_EMPTY_Queue(u16 Arr_Size){
    //Check if the queue is empty
    EMPTY Check=NOT_EMPTY;
    if(FRONT == INITIAL_VALUE){
        Check = IS_EMPTY;
    }else if(FRONT == (s16)(REAR + 1)){
        Check = IS_EMPTY;
    }else{
        Check =NOT_EMPTY;
    }
    return Check;
}




/**************************************************************************/
/*Function:      Insertion new data in Queue
* Parameters:   -u16[Arr_Size]: the size of the allocated array for queue
*               -u16[Data]: the data wanted to insert in queue
* Return:        void*/
void EnQueue(u16 Arr_Size, u16 Data){
    
    //Firstly, Check if the queue is full
    FULL Check= IS_FULL_Queue(Arr_Size);
    if(Check == NOT_FULL){
        //Check on first insertion in queue
        if(FRONT == INITIAL_VALUE ){
            //change FRONT and REAR indices
            FRONT = 0;
            REAR =0;
        }else{
            REAR ++;  //Increment REAR index
        }

        Arr[REAR] = Data;
    }else{
        printf("\nThe queue is full, the Data cann't be sotred in queue\n");
    }
}


/**************************************************************************/
/*Function:      Deletion first input data from the Queue after Reading it
* Parameters:   -u16[Arr_Size]: the size of the allocated array for queue
* Return:        The wanted data at given index*/
s16 DeQueue(u16 Arr_Size){
    
    //Firstly, Check if the queue is empty
    EMPTY Check= IS_EMPTY_Queue(Arr_Size);
    s16 Data;
    if(Check == NOT_EMPTY){
        //Retrieve the Data of first input element at FRONT index 
        Data = Arr[FRONT] ;
        //increment FRONT index for deleting the data
        FRONT ++;  //as FRONT losts the index of this data so it doesn't aviable (as Deletion) 
    }else{

        Data = UNDERFLOW_VALUE ;
    }

    return Data;
}



/**************************************************************************/
/*Function:      Reading first input data from the Queue without deleting it
* Parameters:   -u16[Arr_Size]: the size of the allocated array for queue
* Return:        The wanted data at given index*/
s16 PEEK_From_Queue(u16 Arr_Size){
    
    //Firstly, Check if the queue is empty
    EMPTY Check= IS_EMPTY_Queue(Arr_Size);
    s16 Data;
    if(Check == NOT_EMPTY){
        //Reading the Data of first input element at FRONT index 
        Data = Arr[FRONT] ;

    }else{

        Data= UNDERFLOW_VALUE;
    }

    return Data;
}


/**************************************************************************/
/*Function:      Displaying the value of first input data which is returned from DeQueue or PEEK function
* Parameters:   -s16[first_data]: returned data from DeQueue or PEEK function
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
    
    u16 queue_size= REAR - FRONT ;   /*As REAR and FRONT are indices of first and last 
                                       input data in the queue array*/ 

    return queue_size;
}


/**************************************************************************/
/*Function:      Displaying the data of the Queue
* Parameters:   -u16[Arr_Size]: the size of the allocated array for queue
* Return:        void*/
void Display_Queue(u16 Arr_Size){
    
    //Firstly, Check if the queue is empty
    EMPTY Check= IS_EMPTY_Queue(Arr_Size);

    if(Check == NOT_EMPTY){
        //Display the data
        for(s16 i =FRONT ; i<=REAR ; i++){
            printf("The data at index %d in the queue = %d\n",i,Arr[i]);
        }
    }else{

        printf("\nThe queue is empty, there is no data exists in queue\n");
    }

}
