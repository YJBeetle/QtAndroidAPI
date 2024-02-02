#pragma once

#include "./MenstruationFlowRecord_MenstruationFlowType.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint MenstruationFlowRecord_MenstruationFlowType::FLOW_HEAVY()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MenstruationFlowRecord$MenstruationFlowType",
			"FLOW_HEAVY"
		);
	}
	inline jint MenstruationFlowRecord_MenstruationFlowType::FLOW_LIGHT()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MenstruationFlowRecord$MenstruationFlowType",
			"FLOW_LIGHT"
		);
	}
	inline jint MenstruationFlowRecord_MenstruationFlowType::FLOW_MEDIUM()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MenstruationFlowRecord$MenstruationFlowType",
			"FLOW_MEDIUM"
		);
	}
	inline jint MenstruationFlowRecord_MenstruationFlowType::FLOW_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MenstruationFlowRecord$MenstruationFlowType",
			"FLOW_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
