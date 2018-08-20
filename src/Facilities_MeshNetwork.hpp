//
//! \file
//
// Created by Sander van Woensel / Umut Uyumaz
// Copyright (c) 2018 ASML Netherlands B.V. All rights reserved.
//
//! Mesh Network wrapper class.

#ifndef __Facilities_MeshNetwork__
#define __Facilities_MeshNetwork__

#include "painlessMesh.h"
#include <functional>

namespace Facilities {

class MeshNetwork
{
public:
   MeshNetwork();
   ~MeshNetwork() {};

   void update();
   void initialize(const __FlashStringHelper *prefix, const __FlashStringHelper *password, Scheduler& taskScheduler);

private:
   painlessMesh       m_mesh;

   static const uint16_t PORT;

   void receivedCb(uint32_t from, String& msg);


};

} // namespace Facilities

#endif // __Facilities_MeshNetwork__
