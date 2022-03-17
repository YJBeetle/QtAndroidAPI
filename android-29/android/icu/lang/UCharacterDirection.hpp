#pragma once

#include "../../../JString.hpp"
#include "./UCharacterDirection.def.hpp"

namespace android::icu::lang
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString UCharacterDirection::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacterDirection",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace android::icu::lang

// Base class headers

