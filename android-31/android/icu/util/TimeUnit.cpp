#include "./TimeUnit.hpp"

namespace android::icu::util
{
	// Fields
	
	// QJniObject forward
	TimeUnit::TimeUnit(QJniObject obj) : android::icu::util::MeasureUnit(obj) {}
	
	// Constructors
	
	// Methods
	jarray TimeUnit::values()
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeUnit",
			"values",
			"()[Landroid/icu/util/TimeUnit;"
		).object<jarray>();
	}
} // namespace android::icu::util

