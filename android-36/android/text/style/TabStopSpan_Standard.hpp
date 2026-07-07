#pragma once

#include "../../../JString.hpp"
#include "./TabStopSpan_Standard.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline TabStopSpan_Standard::TabStopSpan_Standard(jint arg0)
		: JObject(
			"android.text.style.TabStopSpan$Standard",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint TabStopSpan_Standard::getTabStop() const
	{
		return callMethod<jint>(
			"getTabStop",
			"()I"
		);
	}
	inline JString TabStopSpan_Standard::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text::style

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
