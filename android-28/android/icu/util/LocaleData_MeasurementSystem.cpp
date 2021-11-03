#include "./LocaleData_MeasurementSystem.hpp"

namespace android::icu::util
{
	// Fields
	android::icu::util::LocaleData_MeasurementSystem LocaleData_MeasurementSystem::SI()
	{
		return getStaticObjectField(
			"android.icu.util.LocaleData$MeasurementSystem",
			"SI",
			"Landroid/icu/util/LocaleData$MeasurementSystem;"
		);
	}
	android::icu::util::LocaleData_MeasurementSystem LocaleData_MeasurementSystem::UK()
	{
		return getStaticObjectField(
			"android.icu.util.LocaleData$MeasurementSystem",
			"UK",
			"Landroid/icu/util/LocaleData$MeasurementSystem;"
		);
	}
	android::icu::util::LocaleData_MeasurementSystem LocaleData_MeasurementSystem::US()
	{
		return getStaticObjectField(
			"android.icu.util.LocaleData$MeasurementSystem",
			"US",
			"Landroid/icu/util/LocaleData$MeasurementSystem;"
		);
	}
	
	// QAndroidJniObject forward
	LocaleData_MeasurementSystem::LocaleData_MeasurementSystem(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::icu::util

