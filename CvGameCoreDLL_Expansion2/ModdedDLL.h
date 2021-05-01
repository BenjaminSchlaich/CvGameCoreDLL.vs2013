#pragma once

#ifndef MODDEDDLL_H_MY_PRAGMA_ONCE
#define MODDEDDLL_H_MY_PRAGMA_ONCE

#include <fstream>

// just remove this one directive to disable all mod code.
#define MODDED

#ifdef MODDED
// to check if we are debugging: if so, usually we'll print to modDebugOFS
const bool DEBUG_MY_MOD = true;

// print error messages to this file when DEBUG_MY_MOD is true
extern std::ofstream modDebugOFS;

// where to put the logfiles
extern const string modDebugLoggingDirectory;
extern const string modDebugLoggingFilename;

#endif	// MODDED

#endif	// MODDEDDLL_H_MY_PRAGMA_ONCE

/*
	just a test.
*/