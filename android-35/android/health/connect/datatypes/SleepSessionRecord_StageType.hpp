#pragma once

#include "./SleepSessionRecord_StageType.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint SleepSessionRecord_StageType::STAGE_TYPE_AWAKE()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SleepSessionRecord$StageType",
			"STAGE_TYPE_AWAKE"
		);
	}
	inline jint SleepSessionRecord_StageType::STAGE_TYPE_AWAKE_IN_BED()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SleepSessionRecord$StageType",
			"STAGE_TYPE_AWAKE_IN_BED"
		);
	}
	inline jint SleepSessionRecord_StageType::STAGE_TYPE_AWAKE_OUT_OF_BED()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SleepSessionRecord$StageType",
			"STAGE_TYPE_AWAKE_OUT_OF_BED"
		);
	}
	inline jint SleepSessionRecord_StageType::STAGE_TYPE_SLEEPING()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SleepSessionRecord$StageType",
			"STAGE_TYPE_SLEEPING"
		);
	}
	inline jint SleepSessionRecord_StageType::STAGE_TYPE_SLEEPING_DEEP()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SleepSessionRecord$StageType",
			"STAGE_TYPE_SLEEPING_DEEP"
		);
	}
	inline jint SleepSessionRecord_StageType::STAGE_TYPE_SLEEPING_LIGHT()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SleepSessionRecord$StageType",
			"STAGE_TYPE_SLEEPING_LIGHT"
		);
	}
	inline jint SleepSessionRecord_StageType::STAGE_TYPE_SLEEPING_REM()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SleepSessionRecord$StageType",
			"STAGE_TYPE_SLEEPING_REM"
		);
	}
	inline jint SleepSessionRecord_StageType::STAGE_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.SleepSessionRecord$StageType",
			"STAGE_TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
