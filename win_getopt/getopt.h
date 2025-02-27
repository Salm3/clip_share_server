/* *****************************************************************
 *
 * Copyright 2016 Microsoft
 *
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************/

#ifndef WIN_GETOPT_GETOPT_H_
#define WIN_GETOPT_GETOPT_H_
#ifdef _WIN32

#ifdef __cplusplus
extern "C" {
#endif

extern char *optarg;
extern int optind;

int getopt(int argc, char *const argv[], const char *optstring);

#ifdef __cplusplus
}
#endif

#endif
#endif  // WIN_GETOPT_GETOPT_H_
