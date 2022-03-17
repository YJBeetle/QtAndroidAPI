#pragma once

#include "./LocaleData_MeasurementSystem.def.hpp"

namespace android::icu::util
{
	// Fields
	inline android::icu::util::LocaleData_MeasurementSystem LocaleData_MeasurementSystem::SI()
	{
		return getStaticObjectField(
			"android.icu.util.LocaleData$MeasurementSystem",
			"SI",
			"Landroid/icu/util/LocaleData$MeasurementSystem;"
		);
	}
	inline android::icu::util::LocaleData_MeasurementSystem LocaleData_MeasurementSystem::UK()
	{
		return getStaticObjectField(
			"android.icu.util.LocaleData$MeasurementSystem",
			"UK",
			"Landroid/icu/util/LocaleData$MeasurementSystem;"
		);
	}
	inline android::icu::util::LocaleData_MeasurementSystem LocaleData_MeasurementSystem::US()
	{
		return getStaticObjectField(
			"android.icu.util.LocaleData$MeasurementSystem",
			"US",
			"Landroid/icu/util/LocaleData$MeasurementSystem;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::icu::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::util;
#endif
