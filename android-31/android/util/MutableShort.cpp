#include "./MutableShort.hpp"

namespace android::util
{
	// Fields
	jshort MutableShort::value()
	{
		return getField<jshort>(
			"value"
		);
	}
	
	// Constructors
	MutableShort::MutableShort(jshort arg0)
		: JObject(
			"android.util.MutableShort",
			"(S)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

