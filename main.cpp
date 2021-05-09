#include <standard/applite.h>//use for StartApplite function
#include "application.h"
#include <standard/safedata.h>
#include <include/stdio.h>
#include <standard/reference.h>



CAppLite* StartApplite() {

    return NEW CTunnelApp();
}

