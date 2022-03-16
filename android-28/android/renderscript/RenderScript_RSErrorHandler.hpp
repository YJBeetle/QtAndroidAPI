#pragma once

#include "../../JString.hpp"
#include "./RenderScript_RSErrorHandler.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline RenderScript_RSErrorHandler::RenderScript_RSErrorHandler()
		: JObject(
			"android.renderscript.RenderScript$RSErrorHandler",
			"()V"
		) {}
	
	// Methods
	inline void RenderScript_RSErrorHandler::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace android::renderscript

// Base class headers

