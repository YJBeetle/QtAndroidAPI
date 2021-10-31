#include "./TimeUnit.hpp"

namespace android::icu::util
{
	// Fields
	
	// QAndroidJniObject forward
	TimeUnit::TimeUnit(QAndroidJniObject obj) : android::icu::util::MeasureUnit(obj) {}
	
	// Constructors
	
	// Methods
	jarray TimeUnit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeUnit",
			"values",
			"()[Landroid/icu/util/TimeUnit;"
		).object<jarray>();
	}
} // namespace android::icu::util

