#include "./LocaleData_MeasurementSystem.hpp"

namespace android::icu::util
{
	// Fields
	QAndroidJniObject LocaleData_MeasurementSystem::SI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.LocaleData$MeasurementSystem",
			"SI",
			"Landroid/icu/util/LocaleData$MeasurementSystem;"
		);
	}
	QAndroidJniObject LocaleData_MeasurementSystem::UK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.LocaleData$MeasurementSystem",
			"UK",
			"Landroid/icu/util/LocaleData$MeasurementSystem;"
		);
	}
	QAndroidJniObject LocaleData_MeasurementSystem::US()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.LocaleData$MeasurementSystem",
			"US",
			"Landroid/icu/util/LocaleData$MeasurementSystem;"
		);
	}
	
	// QAndroidJniObject forward
	LocaleData_MeasurementSystem::LocaleData_MeasurementSystem(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::icu::util

