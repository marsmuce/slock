/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1E1E2E",     /* after initialization */
	[INPUT] =  "#89DCEB",   /* during input */
	[FAILED] = "#F28FAD",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 10;
