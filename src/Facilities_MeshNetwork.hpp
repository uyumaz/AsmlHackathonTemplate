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
   typedef uint32_t NodeId;

   MeshNetwork();
   ~MeshNetwork() {};

   // Disallow copy-ing
	MeshNetwork(const MeshNetwork& other) = delete;
	MeshNetwork(MeshNetwork&& other) = delete;
	MeshNetwork& operator=(const MeshNetwork& other) = delete;

   void update();
   void initialize(const __FlashStringHelper *prefix, const __FlashStringHelper *password, Scheduler& taskScheduler);

   void sendBroadcast(String& message);
   NodeId getMyNodeId();

   void onReceive(receivedCallback_t receivedCallback);



private:
   static const uint16_t PORT;

   painlessMesh       m_mesh;

   void receivedCb(NodeId transmitterNodeId, String& msg);


};

} // namespace Facilities

#endif // __Facilities_MeshNetwork__
