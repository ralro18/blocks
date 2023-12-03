//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-mem",					30,		0},

	{"",	"sb-bat",					30,		0},

	{"",	"sb-vol",					30,		0},

        {"",	"sb-date",					15,		0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
