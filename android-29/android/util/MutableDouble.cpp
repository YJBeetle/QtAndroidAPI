#include "./MutableDouble.hpp"

namespace android::util
{
	// Fields
	jdouble MutableDouble::value()
	{
		return getField<jdouble>(
			"value"
		);
	}
	
	// Constructors
	MutableDouble::MutableDouble(jdouble arg0)
		: JObject(
			"android.util.MutableDouble",
			"(D)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

