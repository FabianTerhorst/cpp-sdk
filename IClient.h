#pragma once

#include "SDK.h"

/**
 * Client interface for client modules
 */

namespace alt
{


class IClient
{
public:

    virtual void LogInfo(alt::StringView str) = 0;
	virtual bool RegisterScriptRuntime(alt::StringView resourceType, alt::IScriptRuntime* runtime) = 0;
};


}