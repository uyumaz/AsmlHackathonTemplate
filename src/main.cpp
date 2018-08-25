#include <Arduino.h>

#include "Debug.hpp"
#include "painlessMesh.h"
#include "Facilities_MeshNetwork.hpp"
#include "Tasks_ExampleTask.hpp"

// Translation unit local variables
namespace {

Scheduler               taskScheduler;

Facilities::MeshNetwork meshNetwork;
Tasks::ExampleTask      exampleTask(meshNetwork);
}

//! Called once at board startup.
void setup()
{
   MY_DEBUG_BEGIN(115200);

   // Create MeshNetwork
   meshNetwork.initialize(F("Mesh-Prefix"), F("Mesh-Secret-Password"), taskScheduler);

   // Add task
   taskScheduler.addTask( exampleTask );
   exampleTask.enable();


   MY_DEBUG_PRINTLN(F("Setup completed"));
}

//! Called repeatedly after setup().
void loop()
{
   taskScheduler.execute();
   meshNetwork.update();
}
