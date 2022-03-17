#pragma once

#include "./UFormat.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline UFormat::UFormat()
		: java::text::Format(
			"android.icu.text.UFormat",
			"()V"
		) {}
	
	// Methods
} // namespace android::icu::text

// Base class headers
#include "../../../java/text/Format.hpp"

