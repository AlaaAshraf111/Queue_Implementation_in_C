/*@Amgad Diploma_C21-StackandQueue_19November2023*/
/*Queue_Implementation_Using_Linkedlist_Driver*/
/*Auther:     Alaa Ashraf
**Date:       19November2023
**LastUpdate: 19November2023*/


#ifndef __SINGLE_LINKEDLIST_IMPLEMENTATION_QUEUE_H__
#define __SINGLE_LINKEDLIST_IMPLEMENTATION_QUEUE_H__

/************************************************* IMPLEMENTING QUEUE USING A SINGLE LINKEDLIST *************************************************/
/*Global Variables*/
//Initialized Value of FRONT and REAR 
#define INITIAL_VALUE  NULL
//Returning Value from Empty queue (at Underflow of queue)
#define UNDERFLOW_VALUE  (s16)-9999


//Enum Used in Checking on queue IS_EMPTY
typedef enum Checking_Queue_Is_Empty{
    NOT_EMPTY=0, IS_EMPTY
}EMPTY;


/*Global Functions Prototype*/
/**************************************************************************/
/*Function:      Initialization of FRONT and REAR pointers
* Parameters:    void      //as FRONT and REAR pointers are global here
* Return:        void*/
void Initialization_Queue();



/**************************************************************************/
/*Function:      Check on if Queue is EMPTY or not
* Parameters:    void      //as FRONT and REAR pointers are global here
* Return:        EMPTY enum (One if Is_EMPTY and Zero if Not)*/
EMPTY IS_EMPTY_Queue();



/**************************************************************************/
/*Function:      Insertion new data in Queue
* Parameters:   -Data [u16]: the data wanted to insert in Queue
* Return:        void*/
void EnQueue(u16 Data);
       


/**************************************************************************/
/*Function:      Deletion first input data from the Queue after Reading it
* Parameters:   void
* Return:        The data of first input element*/
s16 DeQueue();



/**************************************************************************/
/*Function:      Reading first input data from the Queue without deleting it
* Parameters:   void
* Return:        The data of first input element*/
s16 PEEK_From_Queue();


/**************************************************************************/
/*Function:      Displaying the value of first input data which is returned from DeQueue or PEEK function
* Parameters:   -first_data [s16]: returned data from POP or PEEK function
* Return:        void*/
void Displaying_Front_Value(s16 first_data);



/**************************************************************************/
/*Function:      Calculating the number of elements in queue
* Parameters:    void
* Return:        the number of elements in queue*/
u16 Size_Of_Queue();



/**************************************************************************/
/*Function:      Displaying the data of the Queue
* Parameters:   void
* Return:        void*/
void Display_Queue();



#endif