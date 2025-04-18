#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "RobotHeader.h"

robot_s *add_robot_end(robot_s **MotherBoard, char *name, int age, char *phrase)
{
    // Let's go ahead and check if MotherBoard exists

    // as before, we'll create a new robot and set it to NULL
    // but this time we'll also create a temporary robot
    // to help us keep track of where we're at in our army

    // just like before, let's find some space for our robot

    //Let's check to make sure we have space in our army
    //For our new robot

    // Let's get space for those robot attributes!

    // Same as before, check if we have space and free if not

    // Assign all the fields for the new robot
    // Using strcpy or otherwise

    // ***VERY IMPORTANT!!!***
    // Since this will be the last robot in our army,
    // We need to make sure it points to NULL,
    // Signifying we will have reached the end
    // When we go to add a new robot at the end again

    // Even though we know we have more robots,
    // Let's check to see if the list is empty anyway
    if (*MotherBoard == NULL)
    {
        // If we have an empty list
        // We can go ahead and assign the robot to the top
    }

    // Else, we need to traverse to the end of the line
    // We'll use temp_robot to help us with that
    else
    {
        // we'll assign temp_robot 
        // to the same robot MotherBoard is pointing to

        // Let's loop through the robots until
        // we find the one pointing to NULL
        // signifying the end of the line
        // loop start
        while ((temp_bot)->next != NULL)
        {
            // As temp_robot has the data for the next in line
            // We'll go ahead and just use that.
        }

        // Nice! We found the end of the line!
        // Since we've got a pointer to the last robot,
        // Let's assign its value to our new robot!
    }

    // For posterities sake, 
    // let's go ahead and return our new robot
    return (new_robot);
 }
