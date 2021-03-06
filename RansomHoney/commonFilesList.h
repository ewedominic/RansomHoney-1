#ifndef __COMMON_FILES_LIST_H__
#define __COMMON_FILES_LIST_H__

#include <Windows.h>
#include <string.h>
#include <UserEnv.h>
#include <Shlwapi.h>
#include "..\Utils\userUtils.h"
#include "..\Utils\stringUtils.h"
#include "..\Utils\DebugOutput.h"

#define NUM_OF_FILES (6)
#define NUM_OF_HIDE_FROM_PROCS (2)

DWORD getNumOfFiles();

BOOL initFilesList();

/**
 * @return     List of names of the files that should not be visible to the user. 
 *             Accessing these files will imply suspicious behavior, and would be
 *             treated accordingly, as specified in the fileWatcher DLL.
 */
const TCHAR** getFilesList();

/**
 * @return     List of names of the processes the files should be hidden from.
 */
const TCHAR** getProcsToHideFrom();

#endif // __COMMON_FILES_LIST_H__