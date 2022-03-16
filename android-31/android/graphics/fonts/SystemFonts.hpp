#pragma once

#include "./SystemFonts.def.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject SystemFonts::getAvailableFonts()
	{
		return callStaticObjectMethod(
			"android.graphics.fonts.SystemFonts",
			"getAvailableFonts",
			"()Ljava/util/Set;"
		);
	}
} // namespace android::graphics::fonts

// Base class headers

