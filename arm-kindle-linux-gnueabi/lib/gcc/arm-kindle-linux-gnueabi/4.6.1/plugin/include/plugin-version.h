#include "configargs.h"

static char basever[] = "4.6.1";
static char datestamp[] = "20110404";
static char devphase[] = "prerelease";
static char revision[] = "";

/* FIXME plugins: We should make the version information more precise.
   One way to do is to add a checksum. */

static struct plugin_gcc_version gcc_version = {basever, datestamp,
						devphase, revision,
						configuration_arguments};
