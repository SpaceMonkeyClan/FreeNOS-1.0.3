#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <Process.h>

// Renice header(C:/FreeNOS-1.0.3/bin/kill/Kill.h)
#include "Kill.h"

// Process client header(C:/FreeNOS-1.0.3/lib/libruntime/ProcessClient.h)
#include <ProcessClient.h>

// Declared variables within the scope
int processID;

Kill::Kill(int argc, char** argv) : POSIXApplication(argc, argv)
{
	parser().setDescription("Kills an ongoing background process.");
	parser().registerPositional("PID", "The Process ID of the named process.");
    processID = atoi(argv[1]);
}

/*
Kill::~Kill() 
{
	// Nothing
}
*/

// Execution method, performs system call on kill command.
Kill::Result Kill::exec()
{
    printf("\nProcess ID to be killed is: Process %d\n", processID);

    ProcessClient process;

    process.killProcess(processID);

    return Success;
}