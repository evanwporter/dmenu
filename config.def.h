/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

#include "palette.h"

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMonoNL NFP:size=20:style=Bold"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { DMENU_NORM_FG, DMENU_NORM_BG },
	[SchemeSel] = { DMENU_SEL_FG, DMENU_SEL_BG },
	[SchemeOut] = { DMENU_OUT_FG, DMENU_OUT_BG },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
