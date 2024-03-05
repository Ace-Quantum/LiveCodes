#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "RobotHeader.h"

void robot_report(robot_s **MotherBoard, char *name)
{
    // Let's use a TempBot to let MotherBoard stay in place
    robot_s *TempBot;
    TempBot = NULL;

    // And an integer we can use as reference later
    int counter;

    // While TempBot is not at the end of the line
    // Or TempBot is not the robot we're looking for
    // We'll loop through to find the robot we're looking for
    while (TempBot != NULL || (TempBot)->name != name)
    {
        // If the temp bot is null
        // Let's print an error statement
        if (TempBot == NULL)
        {
            printf("Robot Not Found");
        }
        // if we find our robot, let's say where they are in line
        // and print their catchphrase
        elif ((TempBot)->name == name)
        {
            printf("%s is %d robots from the front of the line", name, counter);
            printf("%s", (TempBot)->Catchphrase);
        }
        // Finally let's have an error statement
        // In case something goes wrong
        else
        {
            printf("Unexpected Error Occured");
        }

        //Don't forget to iterate!
        counter++;
    }
}