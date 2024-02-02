#pragma once

#include "./CervicalMucusRecord_CervicalMucusSensation.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint CervicalMucusRecord_CervicalMucusSensation::SENSATION_HEAVY()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.CervicalMucusRecord$CervicalMucusSensation",
			"SENSATION_HEAVY"
		);
	}
	inline jint CervicalMucusRecord_CervicalMucusSensation::SENSATION_LIGHT()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.CervicalMucusRecord$CervicalMucusSensation",
			"SENSATION_LIGHT"
		);
	}
	inline jint CervicalMucusRecord_CervicalMucusSensation::SENSATION_MEDIUM()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.CervicalMucusRecord$CervicalMucusSensation",
			"SENSATION_MEDIUM"
		);
	}
	inline jint CervicalMucusRecord_CervicalMucusSensation::SENSATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.CervicalMucusRecord$CervicalMucusSensation",
			"SENSATION_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
