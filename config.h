/* user and group to drop privileges to */
static const char *user  = "crbl";
static const char *group = "crbl";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282C34",   /* after initialization */
	[INPUT] =  "#61AFEF",   /* during input */
	[FAILED] = "#E06C75",   /* wrong password */
	[CAPS] =   "#E4C07B",   /* capslock on */

};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
