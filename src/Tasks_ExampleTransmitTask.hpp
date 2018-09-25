//
//! \file
//
// Created by Sander van Woensel / Umut Uyumaz
// Copyright (c) 2018 ASML Netherlands B.V. All rights reserved.
//
//! Example Task

#ifndef __Tasks_ExampleTransmitTask__
#define __Tasks_ExampleTransmitTask__

#include <painlessMesh.h>
#include <functional>

// Forward declarations.
namespace Facilities { class MeshNetwork; }

namespace Tasks {

class ExampleTransmitTask : public Task
{
public:
   explicit ExampleTransmitTask(Facilities::MeshNetwork& mesh);
   ~ExampleTransmitTask() {};

   // Disallow copy-ing
	ExampleTransmitTask(const ExampleTransmitTask& other) = delete;
	ExampleTransmitTask(ExampleTransmitTask&& other) = delete;
	ExampleTransmitTask& operator=(const ExampleTransmitTask& other) = delete;

   void execute();

private:
   Facilities::MeshNetwork& m_mesh;

};

} // namespace Tasks

#endif //  __Tasks_ExampleTransmitTask__
