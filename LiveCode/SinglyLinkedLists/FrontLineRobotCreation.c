#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "RobotHeader.h"

/**
 * 
*/

robot_s *add_robot_beginning(robot_s **MotherBoard, char *name, int age, char *phrase)
{
    // create a new robot and set it to NULL
    robot_s *new_robot = NULL;

    // find space for the new robot
    new_robot = malloc(sizeof(robot_s));

    // check to see if we have the space available
    if (new_robot == NULL)
    {
        return (NULL);
    }

    // Assign all the fields for the new robot
    (new_robot)->name = name;
    (new_robot)->Catchphrase = phrase;
    (new_robot)->age = age;

    // take the node Motherboard was pointing to
    // and have our new robot point to it
    (new_robot)->next = *MotherBoard;

    // now that we have updated our list,
    // update MotherBoard on the situation
    *MotherBoard = new_robot;

    // return MotherBoard after her update
    return (*MotherBoard);

}