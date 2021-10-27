#include "./TimeUnit.hpp"

namespace android::icu::util
{
	// Fields
	
	TimeUnit::TimeUnit(QAndroidJniObject obj) { __thiz = obj; }
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

