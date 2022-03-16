#include "../../../JArray.hpp"
#include "./TimeUnit.hpp"

namespace android::icu::util
{
	// Fields
	
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

