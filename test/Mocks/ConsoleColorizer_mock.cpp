/*
 * This file has been auto-generated by CppUTestMock v0.3.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

#include "ConsoleColorizer.hpp"

#include <CppUTestExt/MockSupport.h>

ConsoleColorizer cerrColorizer( ConsoleColorizer::ConsoleType::STD_ERROR );

ConsoleColorizer::ConsoleColorizer( ConsoleType consoleType ) noexcept
: m_handle( NULL ), m_origConsoleAttrs( 0 )
{
}

ConsoleColorizer::~ConsoleColorizer() noexcept
{
}

void ConsoleColorizer::SetColor(ConsoleColorizer::Color color) noexcept
{
    mock().actualCall("ConsoleColorizer::SetColor").withIntParameter("color", static_cast<int>(color));
}

