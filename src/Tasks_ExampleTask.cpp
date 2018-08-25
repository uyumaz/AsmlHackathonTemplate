//
//! \file
//
// Created by Sander van Woensel / Umut Uyumaz
// Copyright (c) 2018 ASML Netherlands B.V. All rights reserved.
//
//! Example Task
#include "Tasks_ExampleTask.hpp"

#include "Debug.hpp"
#include "painlessMesh.h"
#include "Facilities_MeshNetwork.hpp"

#include <functional>

namespace Tasks {


ExampleTask::ExampleTask(Facilities::MeshNetwork& mesh) :
   Task(TASK_SECOND * 1 , TASK_FOREVER, std::bind(&ExampleTask::execute, this)),
   m_mesh(mesh)
{

}

void ExampleTask::execute()
{
   String msg = F("Ping from node ");
   msg += m_mesh.getMyNodeId();
   m_mesh.sendBroadcast( msg );
}

} // namespace Tasks
