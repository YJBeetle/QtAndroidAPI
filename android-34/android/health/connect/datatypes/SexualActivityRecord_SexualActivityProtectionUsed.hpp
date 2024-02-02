#pragma once

#include "./SexualActivityRecord_SexualActivityProtectionUsed.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint SexualActivityRecord_SexualActivityProtectionUsed::PROTECTION_USED_PROTECTED()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SexualActivityRecord$SexualActivityProtectionUsed",
			"PROTECTION_USED_PROTECTED"
		);
	}
	inline jint SexualActivityRecord_SexualActivityProtectionUsed::PROTECTION_USED_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SexualActivityRecord$SexualActivityProtectionUsed",
			"PROTECTION_USED_UNKNOWN"
		);
	}
	inline jint SexualActivityRecord_SexualActivityProtectionUsed::PROTECTION_USED_UNPROTECTED()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SexualActivityRecord$SexualActivityProtectionUsed",
			"PROTECTION_USED_UNPROTECTED"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
