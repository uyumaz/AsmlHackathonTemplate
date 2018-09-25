//
//! \file
//
// Created by Sander van Woensel / Umut Uyumaz
// Copyright (c) 2018 ASML Netherlands B.V. All rights reserved.
//
//! Example Task

#ifndef __Tasks_ExampleDisplayTask__
#define __Tasks_ExampleDisplayTask__

#include "Facilities_MeshNetwork.hpp"

#include <painlessMesh.h>
#include <LEDMatrixDriver.hpp>

#include <functional>

// Forward declarations.
namespace Facilities { class MeshNetwork; }


namespace Tasks {

class ExampleDisplayTask : public Task
{
public:
   explicit ExampleDisplayTask(Facilities::MeshNetwork& mesh);
   ~ExampleDisplayTask() {};

   // Disallow copy-ing
	ExampleDisplayTask(const ExampleDisplayTask& other) = delete;
	ExampleDisplayTask(ExampleDisplayTask&& other) = delete;
	ExampleDisplayTask& operator=(const ExampleDisplayTask& other) = delete;

   void execute();

private:
   static const int LEDMATRIX_WIDTH;
   static const int LEDMATRIX_HEIGHT;
   static const int LEDMATRIX_SEGMENTS;
   static const int LEDMATRIX_INTENSITY;
   static const int LEDMATRIX_CS_PIN;
   static const unsigned long POLL_DELAY_MS;

   Facilities::MeshNetwork& m_mesh;
   LEDMatrixDriver m_lmd;

   int m_x;

   void receivedCb(Facilities::MeshNetwork::NodeId nodeId, String& msg);


};

} // namespace Tasks

#endif //  __Tasks_ExampleDisplayTask__
