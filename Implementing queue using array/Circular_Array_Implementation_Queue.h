/*@Amgad Diploma_C21-StackandQueue_20November2023*/
/*Queue_Implementation_Using_Cirular_Array_Driver*/
/*Auther:     Alaa Ashraf
**Date:       20November2023
**LastUpdate: 20November2023*/

/********************************************************************/
/*
*Circular Array is a concept achieved by returning to the array beginning 
*and looping again about the whole array if we reached to its end.
*Implementing the Queue using Circular Array solves the wasted memory 
*that caused by implementing by array. By making "REAR" and "FRONT"
*indices return to -1 after reaching the end of queue.
*/
/********************************************************************/

#ifndef __CIRCULAR_ARRAY_IMPLEMENTATION_QUEUE_H__
#define __CIRCULAR_ARRAY_IMPLEMENTATION_QUEUE_H__



/************************************************* IMPLEMENTING QUEUE USING A CIRCULAR ARRAY *************************************************/
/*Global Variables*/
//Initialized Value of FRONT and REAR 
#define INITIAL_VALUE  (s16)-1
//Returning Value from Empty queue (at Underflow of queue)
#define UNDERFLOW_VALUE  (s16)-9999

#define SIZE  6
u16 Arr[SIZE];   //The array allocated for the queue


//Enum Used in Checking on queue IS_FULL
typedef enum Checking_Queue_Is_Full{
    NOT_FULL=0, IS_FULL
}FULL;
//Enum Used in Checking on Queue IS_EMPTY
typedef enum Checking_Queue_Is_Empty{
    NOT_EMPTY=0, IS_EMPTY
}EMPTY;


/*Global Functions Prototype*/
/**************************************************************************/
/*Function:      Initialization of FRONT and REAR Index
* Parameters:   -u16[Arr_Size]: the size of the allocated array for queue
* Return:        void*/
void Initialization_Queue(u16 Arr_Size);



/**************************************************************************/
/*Function:      Check on if Queue is FULL or not
* Parameters:   -u16[Arr_Size]: the size of the allocated array for queue
* Return:        FULL enum (One if Is_Full and Zero if Not)*/
FULL IS_FULL_Queue(u16 Arr_Size);



/**************************************************************************/
/*Function:      Check on if Queue is EMPTY or not
* Parameters:   -u16[Arr_Size]: the size of the allocated array for queue
* Return:        EMPTY enum (One if Is_EMPTY and Zero if Not)*/
EMPTY IS_EMPTY_Queue(u16 Arr_Size);



/**************************************************************************/
/*Function:      Insertion new data in Queue
* Parameters:   -u16[Arr_Size]: the size of the allocated array for queue
*               -u16[Data]: the data wanted to insert in queue
* Return:        void*/
void EnQueue(u16 Arr_Size, u16 Data);



/**************************************************************************/
/*Function:      Deletion first input data from the Queue after Reading it
* Parameters:   -u16[Arr_Size]: the size of the allocated array for queue
* Return:        The data of first input element*/
s16 DeQueue(u16 Arr_Size);




/**************************************************************************/
/*Function:      Reading first input data from the Queue without deleting it
* Parameters:   -u16[Arr_Size]: the size of the allocated array for queue
* Return:        The data of first input element*/
s16 PEEK_From_Queue(u16 Arr_Size);

/**************************************************************************/
/*Function:      Displaying the value of first input data which is returned from DeQueue or PEEK function
* Parameters:   -s16[first_data]: returned data from DeQueue or PEEK function
* Return:        void*/
void Displaying_Front_Value(s16 first_data);



/**************************************************************************/
/*Function:      Calculating the number of elements in queue
* Parameters:    void
* Return:        the number of elements in queue*/
u16 Size_Of_Queue(u16 Arr_Size);



/**************************************************************************/
/*Function:      Displaying the data of the Queue
* Parameters:   -u16[Arr_Size]: the size of the allocated array for queue
* Return:        void*/
void Display_Queue(u16 Arr_Size);


#endif