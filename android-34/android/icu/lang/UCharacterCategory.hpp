#pragma once

#include "../../../JString.hpp"
#include "./UCharacterCategory.def.hpp"

namespace android::icu::lang
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString UCharacterCategory::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacterCategory",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace android::icu::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::lang;
#endif
