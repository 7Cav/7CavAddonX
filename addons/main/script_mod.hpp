// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX cavx

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.76
#define REQUIRED_CBA_VERSION {3,4,1}

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(7th Cavalry Community Addon Extras - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(PREFIX - COMPONENT)
#endif
