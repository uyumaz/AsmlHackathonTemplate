//
//! \file
//
// Created by Sander van Woensel / Umut Uyumaz
// Copyright (c) 2018 ASML Netherlands B.V. All rights reserved.
//
//! Example Task

#ifndef __Tasks_ExampleTask__
#define __Tasks_ExampleTask__

#include "painlessMesh.h"
#include <functional>

// Forward declarations.
namespace Facilities { class MeshNetwork; }

namespace Tasks {

class ExampleTask : public Task
{
public:
   ExampleTask(Facilities::MeshNetwork& mesh);
   ~ExampleTask() {};

   void execute();

private:
   Facilities::MeshNetwork& m_mesh;

};

} // namespace Tasks

#endif //  __Tasks_ExampleTask__
