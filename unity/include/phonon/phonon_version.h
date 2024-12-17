/*
 *  Copyright 2017-2023 Valve Corporation.
 * 
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef IPL_PHONON_VERSION_H
#define IPL_PHONON_VERSION_H

#define STEAMAUDIO_VERSION_MAJOR 4
#define STEAMAUDIO_VERSION_MINOR 6
#define STEAMAUDIO_VERSION_PATCH 0
#define STEAMAUDIO_VERSION       (((IPLuint32)(STEAMAUDIO_VERSION_MAJOR) << 16) | \
                                  ((IPLuint32)(STEAMAUDIO_VERSION_MINOR) << 8) |  \
                                  ((IPLuint32)(STEAMAUDIO_VERSION_PATCH)))

#endif
