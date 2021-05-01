#include "CvGameCoreDLLPCH.h"
#include <stdexcept>
#include "ModdedDLL.h"


#ifdef MODDED

// initialize the logging output stream
const string modDebugLoggingDirectory = "C://Users//Benjamin//Documents//My Games//Sid Meier's Civilization 5//Logs//";
const string modDebugLoggingFilename = "CanalModDebugLog.txt";
std::ofstream modDebugOFS = std::ofstream((modDebugLoggingDirectory + modDebugLoggingFilename).c_str());
#endif	//MODDED