#pragma once

#include "./WindowInspector.def.hpp"

namespace android::view::inspector
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject WindowInspector::getGlobalWindowViews()
	{
		return callStaticObjectMethod(
			"android.view.inspector.WindowInspector",
			"getGlobalWindowViews",
			"()Ljava/util/List;"
		);
	}
} // namespace android::view::inspector

// Base class headers

