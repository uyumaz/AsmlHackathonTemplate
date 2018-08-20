//
//! \file
//
// Created by Sander van Woensel / Umut Uyumaz
//  Copyright (c) 2018 ASML Netherlands B.V. All rights reserved.
//
//! MY_DEBUG support

#define MY_DEBUG

#ifdef MY_DEBUG
   #define MY_DEBUG_BEGIN(baudRate) Serial.begin(baudRate)
   #define MY_DEBUG_PRINT(...) Serial.print(__VA_ARGS__)
   #define MY_DEBUG_PRINTLN(...) Serial.println(__VA_ARGS__)
   #define MY_DEBUG_PRINTF(...) Serial.printf(__VA_ARGS__)
#else
   #define MY_DEBUG_BEGIN(baudRate)
   #define MY_DEBUG_PRINT(...)
   #define MY_DEBUG_PRINTLN(...)
   #define MY_DEBUG_PRINTF(...)
#endif
