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
               
#ifndef __GCUCSC_H__
#define __GCUCSC_H__

#include <gcu.h>

typedef enum _GPU_CSC_FORMULA{          /* different formula to choose */
    GPU_CSC_FORMULA_BT601_GC    =   0x0,    /* Y'CbCr formula defined in the ITU-R BT.601 standard, integer approximated in GC, default value */
    GPU_CSC_FORMULA_BT709_GC    =   0x1,    /* Y'CbCr formula defined in the ITU-R BT.709 standard, integer approximated in GC */
    GPU_CSC_FORMULA_BT601       =   0x10,   /* Y'CbCr formula defined in the ITU-R BT.601 standard, fixed-point implementation */
    GPU_CSC_FORMULA_BT709       =   0x11,   /* Y'CbCr formula defined in the ITU-R BT.709 standard, fixed-point implementation */
    GPU_CSC_FORMULA_TRADITIONAL =   0x12,   /* traditional YUV formula used in analog equipments, fixed-point implementation */

    GPU_CSC_FORMULA_FORCE_UINT  =   0xFFFFFFFF
}GPU_CSC_FORMULA;

#ifdef __cplusplus
extern "C" {
#endif

GCUbool _gcuConvertARGB2YUV(GCUContext pContext, GCUSurface pARGBSurface, GCUSurface pYUVSurface);

void gpu_csc_ARGBToI420(const unsigned char* pSrc, GCUint srcStride,
                        unsigned char* pDst[3], GCUint dstStride[3],
                        GCUint width, GCUint height);

void gpu_csc_ARGBToUYVY(const unsigned char* pSrc, GCUint srcStride,
                        unsigned char* pDst, GCUint dstStride,
                        GCUint width, GCUint height);

void gpu_csc_ARGBToNV21(const unsigned char* pSrc, GCUint srcStride,
                        unsigned char* pDst[2], GCUint dstStride[2],
                        GCUint width, GCUint height);

void gpu_csc_ARGBToNV12(const unsigned char* pSrc, GCUint srcStride,
                        unsigned char* pDst[2], GCUint dstStride[2],
                        GCUint width, GCUint height);

void gpu_csc_RGBToNV12(const unsigned char* pSrc, GCUint srcStride,
                       unsigned char* pDst[2], GCUint dstStride[2],
                       GCUint width, GCUint height);

void gpu_csc_ChooseFormula(GPU_CSC_FORMULA formula);

#ifdef __cplusplus
}
#endif

#endif /* __GCUCSC_H__ */
