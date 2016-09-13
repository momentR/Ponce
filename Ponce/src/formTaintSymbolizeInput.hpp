#pragma once
//Triton
#include <api.hpp>

//IDA
#include <ida.hpp>

triton::arch::MemoryAccess *prompt_window_taint_symbolize(ea_t address);

static const char formTaintSymbolizeInput[] =
"STARTITEM 0\n"
"Taint / Symbolize memory range\n\n"
"%/"
"<#The memory address to taint/symbolize#Memory address\t:M1:16:16>\n"
"<#The size#Size\t:D2:10:10>\n"
"\n"
;