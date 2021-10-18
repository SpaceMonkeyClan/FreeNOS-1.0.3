#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

// Renice header(C:/FreeNOS-1.0.3/bin/renice/Renice.h)
#include "Renice.h"

// Libary implementation
// Renice system header(C:/FreeNOS-1.0.3/lib/libposix/sys/renice/Renice.h)
#include "sys/renice.h"
// Process client header(C:/FreeNOS-1.0.3/lib/libruntime/ProcessClient.h)
#include <ProcessClient.h>

Renice::Renice(int argc, char** argv) : POSIXApplication(argc, argv)
{
	parser().setDescription("Renice for a state change within the process");
    parser().registerPositional("Priority", "The current set priority of the process");
	parser().registerPositional("PID", "The Process ID of the named process");
	parser().registerFlag('n', "priority", "Parameter that sets a new priority to the process");
    newPriority = atoi(argv[2]);
    processID = atoi(argv[3]);
}

Renice::~Renice()
{
	// Nothing
}

// Execution method, performs system call on renicePID using user-provided Process ID.
Renice::Result Renice::exec()
{
    printf("processID = %d\n", processID);
    printf("newPriority = %d\n", newPriority);
    bool result;
    ProcessClient process;

    // If priority is set less than 1 or greater than 5 (invalid)
    if (newPriority < 1 || newPriority > 5)
	{
        result = false;
        printf("Invalid new set priority.\n");
    }
	// If check is false (valid)
    else
	{
        process.setPriority(processID, newPriority);
        result = true;
        printf("Validated Priority.\n");
    }
    
    // Print result prompt after check
    if (result == true)
	{
        printf("Priority has been changed.\n");
    }
    else
	{
        printf("Priority has NOT been changed.\n");
    }

    return Success;
}