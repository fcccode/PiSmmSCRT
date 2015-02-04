/*++

Copyright (c) 2010, Intel Corporation
All rights reserved. This program and the accompanying materials
are licensed and made available under the terms and conditions of the Eclipse Public License
which accompanies this distribution.  The full text of the license may be found at
http://www.opensource.org/licenses/eclipse-1.0.php

THE PROGRAM IS DISTRIBUTED UNDER THE ECLIPSE PUBLIC LICENSE (EPL) ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

Module Name:

  RtSmmPERIODICSMILibBbTest.h

Abstract:

  Runtime SmmPERIODICSMILib Protocol Test.

--*/

#ifndef _RT_SMM_PERIODICSMILIB_BB_TEST_H_
#define _RT_SMM_PERIODICSMILIB_BB_TEST_H_

//
// Includes
//

#include "Efi.h"

//
// Definitions
//

#define RT_SMM_PERIODICSMILIB_BB_TEST_GUID          \
{ 0x5ace543b, 0x1912, 0x4a5b, { 0x86, 0x86, 0xc3, 0x2e, 0x27, 0x42, 0x43, 0x23 } }


#define LIB_TEST_SMMPERIODICSMI_ASSERTION_001_GUID \
{ 0x1fac559b, 0x63c4, 0x4370, { 0x98, 0x94, 0x94, 0x17, 0xb4, 0x83, 0x39, 0x80 } }

#define LIB_TEST_SMMPERIODICSMI_ASSERTION_002_GUID \
{ 0x285c77c4, 0x9fe2, 0x40f6, { 0x9a, 0xab, 0xa9, 0xc, 0x1b, 0xe1, 0x14, 0xae } }

#define LIB_TEST_SMMPERIODICSMI_ASSERTION_003_GUID \
{ 0xe82cb506, 0x282b, 0x4aff, { 0xa3, 0xc1, 0xf, 0x70, 0xa2, 0x50, 0x1, 0x52 } }

#define LIB_TEST_SMMPERIODICSMI_ASSERTION_004_GUID \
{ 0xfd7ea182, 0xcb23, 0x4f01, { 0x86, 0x9a, 0xea, 0xf7, 0xe4, 0x58, 0x36, 0x4 } }

#define LIB_TEST_SMMPERIODICSMI_ASSERTION_005_GUID \
{ 0x2b8a5f94, 0x1a19, 0x4aa6, { 0xbf, 0x81, 0x66, 0xd2, 0x63, 0x72, 0x9c, 0x5b } }

#define LIB_TEST_SMMPERIODICSMI_ASSERTION_006_GUID \
{ 0x2b19271b, 0xdcdb, 0x45af, { 0xb4, 0x5f, 0x1b, 0x3f, 0xa5, 0x6, 0xc2, 0x96 } }

#define LIB_TEST_SMMPERIODICSMI_ASSERTION_007_GUID \
{ 0xcbf4c3d3, 0x3040, 0x4793, { 0x9d, 0x6b, 0x50, 0x5d, 0x45, 0x5d, 0xa4, 0xda } }

#define LIB_TEST_SMMPERIODICSMI_ASSERTION_008_GUID \
{ 0xb8246941, 0xff95, 0x4216, { 0x86, 0x50, 0x34, 0xd1, 0x52, 0x5, 0xfc, 0xab } }

#define LIB_TEST_SMMPERIODICSMI_ASSERTION_009_GUID \
{ 0x631bd543, 0x88bd, 0x46fe, { 0x9b, 0x1b, 0x37, 0xfd, 0xc3, 0x2b, 0xdc, 0x56 } }

#define LIB_TEST_SMMPERIODICSMI_ASSERTION_010_GUID \
{ 0xce8e264f, 0xfcbc, 0x48cd, { 0x8c, 0xce, 0x19, 0x28, 0xb3, 0xf1, 0xa9, 0x9c } }

#define LIB_TEST_SMMPERIODICSMI_ASSERTION_011_GUID \
{ 0x549814ee, 0x3dee, 0x41e2, { 0x9a, 0x23, 0xe, 0x10, 0xa3, 0x73, 0x19, 0x48 } }

// {34F46DBE-5BF6-4395-BB9A-0D838FAD0F2C}
#define LIB_TEST_SMMPERIODICSMI_ASSERTION_012_GUID \
{ 0x34f46dbe, 0x5bf6, 0x4395, { 0xbb, 0x9a, 0xd, 0x83, 0x8f, 0xad, 0xf, 0x2c } }
// {677B861B-A080-4efa-A7AE-C431E88F5318}
#define LIB_TEST_SMMPERIODICSMI_ASSERTION_013_GUID \
{ 0x677b861b, 0xa080, 0x4efa, { 0xa7, 0xae, 0xc4, 0x31, 0xe8, 0x8f, 0x53, 0x18 } }
// {106AB9DD-8215-46f2-8046-0BB330EA0209}
#define LIB_TEST_SMMPERIODICSMI_ASSERTION_014_GUID \
{ 0x106ab9dd, 0x8215, 0x46f2, { 0x80, 0x46, 0xb, 0xb3, 0x30, 0xea, 0x2, 0x9 } }
// {C186E7B4-1636-452e-B9FC-899B6C841E65}
#define LIB_TEST_SMMPERIODICSMI_ASSERTION_015_GUID \
{ 0xc186e7b4, 0x1636, 0x452e, { 0xb9, 0xfc, 0x89, 0x9b, 0x6c, 0x84, 0x1e, 0x65 } }
// {D806A106-2E5F-46c3-92BE-DF7F07A437E7}
#define LIB_TEST_SMMPERIODICSMI_ASSERTION_016_GUID \
{ 0xd806a106, 0x2e5f, 0x46c3, { 0x92, 0xbe, 0xdf, 0x7f, 0x7, 0xa4, 0x37, 0xe7 } }
// {BB1F09BC-4BCA-4b21-B5ED-609E02C7BCC4}
#define LIB_TEST_SMMPERIODICSMI_ASSERTION_017_GUID \
{ 0xbb1f09bc, 0x4bca, 0x4b21, { 0xb5, 0xed, 0x60, 0x9e, 0x2, 0xc7, 0xbc, 0xc4 } }
// {B8C4BD43-BA26-4cca-9B14-D58F70462967}
#define LIB_TEST_SMMPERIODICSMI_ASSERTION_018_GUID \
{ 0xb8c4bd43, 0xba26, 0x4cca, { 0x9b, 0x14, 0xd5, 0x8f, 0x70, 0x46, 0x29, 0x67 } }
// {FE53C466-5B97-44c0-ABCF-C3B51DB0F78C}
#define LIB_TEST_SMMPERIODICSMI_ASSERTION_019_GUID \
{ 0xfe53c466, 0x5b97, 0x44c0, { 0xab, 0xcf, 0xc3, 0xb5, 0x1d, 0xb0, 0xf7, 0x8c } }
// {AC6E3A5D-A5AE-4fa8-B314-C6E59AC7D768}
#define LIB_TEST_SMMPERIODICSMI_ASSERTION_020_GUID \
{ 0xac6e3a5d, 0xa5ae, 0x4fa8, { 0xb3, 0x14, 0xc6, 0xe5, 0x9a, 0xc7, 0xd7, 0x68 } }
// {C4D240D5-83A9-4f70-8611-0D9040959C4D}
#define LIB_TEST_SMMPERIODICSMI_ASSERTION_021_GUID \
{ 0xc4d240d5, 0x83a9, 0x4f70, { 0x86, 0x11, 0xd, 0x90, 0x40, 0x95, 0x9c, 0x4d } }
// {E5A50CE0-4761-4e76-BA7F-4D65CBAB7C41}
#define LIB_TEST_SMMPERIODICSMI_ASSERTION_022_GUID \
{ 0xe5a50ce0, 0x4761, 0x4e76, { 0xba, 0x7f, 0x4d, 0x65, 0xcb, 0xab, 0x7c, 0x41 } }
// {329D4787-7708-4650-855A-C20F5E54B954}
#define LIB_TEST_SMMPERIODICSMI_ASSERTION_023_GUID \
{ 0x329d4787, 0x7708, 0x4650, { 0x85, 0x5a, 0xc2, 0xf, 0x5e, 0x54, 0xb9, 0x54 } }
// {8890B7CA-1712-405a-BAF9-724824E79683}
#define LIB_TEST_SMMPERIODICSMI_ASSERTION_024_GUID \
{ 0x8890b7ca, 0x1712, 0x405a, { 0xba, 0xf9, 0x72, 0x48, 0x24, 0xe7, 0x96, 0x83 } }


//
// Prototype of conformance tests
//

EFI_STATUS
RtSmmPeriodicSmiLibBbTest (
  IN  EFI_RUNTIME_SERVICES  *vRT
  );



#endif
