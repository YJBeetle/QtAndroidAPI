#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./TimeUnit.hpp"

namespace android::icu::util
{
	// Fields
	
	// QJniObject forward
	TimeUnit::TimeUnit(QJniObject obj) : android::icu::util::MeasureUnit(obj) {}
	
	// Constructors
	
	// Methods
	JArray TimeUnit::values()
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeUnit",
			"values",
			"()[Landroid/icu/util/TimeUnit;"
		);
	}
} // namespace android::icu::util

