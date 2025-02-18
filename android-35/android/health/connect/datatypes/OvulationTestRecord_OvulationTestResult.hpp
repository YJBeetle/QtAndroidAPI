#pragma once

#include "./OvulationTestRecord_OvulationTestResult.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint OvulationTestRecord_OvulationTestResult::RESULT_HIGH()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.OvulationTestRecord$OvulationTestResult",
			"RESULT_HIGH"
		);
	}
	inline jint OvulationTestRecord_OvulationTestResult::RESULT_INCONCLUSIVE()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.OvulationTestRecord$OvulationTestResult",
			"RESULT_INCONCLUSIVE"
		);
	}
	inline jint OvulationTestRecord_OvulationTestResult::RESULT_NEGATIVE()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.OvulationTestRecord$OvulationTestResult",
			"RESULT_NEGATIVE"
		);
	}
	inline jint OvulationTestRecord_OvulationTestResult::RESULT_POSITIVE()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.OvulationTestRecord$OvulationTestResult",
			"RESULT_POSITIVE"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
