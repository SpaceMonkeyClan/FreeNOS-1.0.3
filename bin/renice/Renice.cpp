#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <Process.h>
#include <ProcessManager.h>
#include <sys/Renice.h>
#include "Renice.h"

Renice::Renice(int argc, char** argv) : POSIXApplication(argc, argv)
{
	parser().setDescription("Renice for a state change within the process");
	parser().registerPositional("PROCESS_ID", "Renice for the given process until it returns or finishes");
}

Renice::~Renice() {
	// Nothing
}

// Execution method, performs system call on renicePID using user-provided Process ID.
Renice::Result Renice::exec() {
	ProcessID arg_id;
	int store_result, success;
	// Check if user enters reserved
	if ((arg_id = atoi(arguments().get("PROCESS_ID"))) <= 3) {
		ERROR("Invalid PID `" << arguments().get("PROCESS_ID") << "'");
		return InvalidArgument;
	}

	success = renicepid(arg_id, &store_result, 0);
	if (!success) {
		ERROR("Could not renice for " << arguments().get("PROCESS_ID") << "'");
		return TimedOut;
	}
	return Success;
}