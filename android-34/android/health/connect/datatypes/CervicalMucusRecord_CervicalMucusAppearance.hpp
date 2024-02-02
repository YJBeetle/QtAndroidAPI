#pragma once

#include "./CervicalMucusRecord_CervicalMucusAppearance.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint CervicalMucusRecord_CervicalMucusAppearance::APPEARANCE_CREAMY()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.CervicalMucusRecord$CervicalMucusAppearance",
			"APPEARANCE_CREAMY"
		);
	}
	inline jint CervicalMucusRecord_CervicalMucusAppearance::APPEARANCE_DRY()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.CervicalMucusRecord$CervicalMucusAppearance",
			"APPEARANCE_DRY"
		);
	}
	inline jint CervicalMucusRecord_CervicalMucusAppearance::APPEARANCE_EGG_WHITE()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.CervicalMucusRecord$CervicalMucusAppearance",
			"APPEARANCE_EGG_WHITE"
		);
	}
	inline jint CervicalMucusRecord_CervicalMucusAppearance::APPEARANCE_STICKY()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.CervicalMucusRecord$CervicalMucusAppearance",
			"APPEARANCE_STICKY"
		);
	}
	inline jint CervicalMucusRecord_CervicalMucusAppearance::APPEARANCE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.CervicalMucusRecord$CervicalMucusAppearance",
			"APPEARANCE_UNKNOWN"
		);
	}
	inline jint CervicalMucusRecord_CervicalMucusAppearance::APPEARANCE_UNUSUAL()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.CervicalMucusRecord$CervicalMucusAppearance",
			"APPEARANCE_UNUSUAL"
		);
	}
	inline jint CervicalMucusRecord_CervicalMucusAppearance::APPEARANCE_WATERY()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.CervicalMucusRecord$CervicalMucusAppearance",
			"APPEARANCE_WATERY"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
