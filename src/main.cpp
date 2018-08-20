#include <Arduino.h>

#include "Debug.hpp"
#include "painlessMesh.h"
#include "Facilities_MeshNetwork.hpp"

// Module local variables
Scheduler               taskScheduler;
Facilities::MeshNetwork meshNetwork;


// TODO: create a task that broadcasts a message. Maybe add a main class which creates the task and stores it


//! Called once at board startup.
void setup()
{
   MY_DEBUG_BEGIN(115200);

   meshNetwork.initialize(F("Mesh-Prefix"), F("Mesh-Secret-Password"), taskScheduler);

   MY_DEBUG_PRINTLN(F("Setup completed"));
}

//! Called repeatedly after setup().
void loop()
{
   taskScheduler.execute();
   meshNetwork.update();
    // put your main code here, to run repeatedly:
}
