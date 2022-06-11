#include "util.h"

#include <string.h>

#define HELP_INFO "Usage:\n" \
	"\tbased-browser [-h | --help] <url>\n" \
	"\tOptions:\n" \
	"\t\t-h, --help\t Print this message and exit."

int main(int argc, char** argv)
{
	/* parsing command line args */
	if (argc == 1)
	{
		die("You need to provide a URL to load.");
	}
	else if (argc > 2)
	{
		die("Too many arguments.");
	}
	else if ((strncmp("-h", argv[1], 3) == 0) || (strncmp("--help", argv[1], 7) == 0))
	{
		die(HELP_INFO);
	}

	return 0;
}
