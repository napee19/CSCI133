// ======================================================================================================================================
// File: NotFoundException.cpp
// ======================================================================================================================================
// Implementatiion file of NotFoundException.h
// ======================================================================================================================================
#include <iostream>
#include "NotFoundException.h"

// == CTOR ==============================================================================================================================
//
// ======================================================================================================================================
NotFoundException::NotFoundException(string errorMsg) : m_errorMsg(errorMsg)
{
} // end CTOR


// == GetMsg ============================================================================================================================
//
// ======================================================================================================================================
std::string NotFoundException::GetMsg() const
{
    return m_errorMsg;
} // end getMsg

// == SetMsg ============================================================================================================================
//
// ======================================================================================================================================
void NotFoundException::SetMsg(std::string errorMsg)
{
    m_errorMsg = errorMsg;
} // end setMsg
