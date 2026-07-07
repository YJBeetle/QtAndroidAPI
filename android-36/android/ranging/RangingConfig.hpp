#pragma once

#include "../../JString.hpp"
#include "./RangingConfig.def.hpp"

namespace android::ranging
{
	// Fields
	inline jint RangingConfig::RANGING_SESSION_OOB()
	{
		return getStaticField<jint>(
			"android.ranging.RangingConfig",
			"RANGING_SESSION_OOB"
		);
	}
	inline jint RangingConfig::RANGING_SESSION_RAW()
	{
		return getStaticField<jint>(
			"android.ranging.RangingConfig",
			"RANGING_SESSION_RAW"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RangingConfig::getRangingSessionType() const
	{
		return callMethod<jint>(
			"getRangingSessionType",
			"()I"
		);
	}
	inline JString RangingConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::ranging

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging;
#endif
