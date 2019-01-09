/*
 * Copyright (C) 2016 The CyanogenMod Project
 *               2017 The LineageOS Project
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
 */

#ifndef _TEE_CLIENT
#define _TEE_CLIENT

#define TEEC_MAGIC 0x43454554 // 'TEEC'

/*
struct _TEEC_Context
{
    // This should be equal to TEEC_MAGIC
    int32_t magic;
    int32_t fd;
    int32_t unk1;
    int32_t unk2;
};
typedef _TEEC_Context *TEEC_Context;

struct _TEEC_Session
{
    // This should be equal to TEEC_MAGIC
    int32_t magic;
    int32_t fd;
    int32_t unk1;
    int32_t unk2;
};
typedef _TEEC_Session *TEEC_Session;
*/

#ifdef __cplusplus
extern "C" {
#endif

#include <mmp-tzdd/tee_client_api.h>

#ifdef __cplusplus
}
#endif

 #endif // _TEE_CLIENT
