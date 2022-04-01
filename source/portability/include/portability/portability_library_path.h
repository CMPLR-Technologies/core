/*
 *	Portability Library by Parra Studios
 *	A generic cross-platform portability utility.
 *
 *	Copyright (C) 2016 - 2022 Vicente Eduardo Ferrer Garcia <vic798@gmail.com>
 *
 *	Licensed under the Apache License, Version 2.0 (the "License");
 *	you may not use this file except in compliance with the License.
 *	You may obtain a copy of the License at
 *
 *		http://www.apache.org/licenses/LICENSE-2.0
 *
 *	Unless required by applicable law or agreed to in writing, software
 *	distributed under the License is distributed on an "AS IS" BASIS,
 *	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *	See the License for the specific language governing permissions and
 *	limitations under the License.
 *
 */

#ifndef PORTABILITY_LIBRARY_PATH_H
#define PORTABILITY_LIBRARY_PATH_H 1

/* -- Headers -- */

#include <portability/portability_api.h>

#include <portability/portability_path.h>

/* -- Type Definitions -- */

typedef char portability_library_path_str[PORTABILITY_PATH_SIZE];

#ifdef __cplusplus
extern "C" {
#endif

/* -- Methods -- */

/**
*  @brief
*    Get the path to a library loaded in the process itself by @name
*
*  @param[in] name
*    Name of the library that will be searched for the path
*
*  @param[out] path
*    The path found (if any) with that library name
*
*  @param[out] length
*    The length of the path found (if any)
*
*  @return
*    Returns zero if it could find the path, different from zero if not found
*/
PORTABILITY_API int portability_library_path(const char name[], portability_library_path_str path, size_t *length);

#ifdef __cplusplus
}
#endif

#endif /* PORTABILITY_LIBRARY_PATH_H */