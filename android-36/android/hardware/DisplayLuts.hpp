#pragma once

#include "./DisplayLuts_Entry.def.hpp"
#include "../../JString.hpp"
#include "./DisplayLuts.def.hpp"

namespace android::hardware
{
	// Fields
	
	// Constructors
	inline DisplayLuts::DisplayLuts()
		: JObject(
			"android.hardware.DisplayLuts",
			"()V"
		) {}
	
	// Methods
	inline void DisplayLuts::set(android::hardware::DisplayLuts_Entry arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/hardware/DisplayLuts$Entry;)V",
			arg0.object()
		);
	}
	inline void DisplayLuts::set(android::hardware::DisplayLuts_Entry arg0, android::hardware::DisplayLuts_Entry arg1) const
	{
		callMethod<void>(
			"set",
			"(Landroid/hardware/DisplayLuts$Entry;Landroid/hardware/DisplayLuts$Entry;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString DisplayLuts::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
