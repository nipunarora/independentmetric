/*********************************
 *Author: Nipun Arora*
 *Organization: Columbia University*
 *All rights reserved*
 *********************************/

#include <stdio.h>
#include <fstream.h>
#include <iostream.h>
#include <string.h>
#include "pin.H"

FILE *out;

VOID analysis()
{
  
}

VOID Instruction(INS ins, VOID *v)
{
  INS_InsertCall()  
}

int main(int argc, char * argv[])
{

    PIN_InitSymbols();
    // Initialize pin
    if (PIN_Init(argc, argv)) return Usage();
	
    out= fopen("metricGraph.out","w");

    // Register Routine to be called to instrument rtn
    INS_AddInstrumentFunction(Instruction,0);
    // Register Fini to be called when the application exits
    PIN_AddFiniFunction(Fini, 0);
    
    // Start the program, never returns
    PIN_StartProgram();
    
    return 0;
}
