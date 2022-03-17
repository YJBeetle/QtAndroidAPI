#pragma once

#include "./IDNA_Info.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline IDNA_Info::IDNA_Info()
		: JObject(
			"android.icu.text.IDNA$Info",
			"()V"
		) {}
	
	// Methods
	inline JObject IDNA_Info::getErrors() const
	{
		return callObjectMethod(
			"getErrors",
			"()Ljava/util/Set;"
		);
	}
	inline jboolean IDNA_Info::hasErrors() const
	{
		return callMethod<jboolean>(
			"hasErrors",
			"()Z"
		);
	}
	inline jboolean IDNA_Info::isTransitionalDifferent() const
	{
		return callMethod<jboolean>(
			"isTransitionalDifferent",
			"()Z"
		);
	}
} // namespace android::icu::text

// Base class headers

