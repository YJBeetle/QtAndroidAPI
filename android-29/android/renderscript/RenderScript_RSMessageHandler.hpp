#pragma once

#include "../../JIntArray.hpp"
#include "./RenderScript_RSMessageHandler.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline RenderScript_RSMessageHandler::RenderScript_RSMessageHandler()
		: JObject(
			"android.renderscript.RenderScript$RSMessageHandler",
			"()V"
		) {}
	
	// Methods
	inline void RenderScript_RSMessageHandler::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace android::renderscript

// Base class headers

