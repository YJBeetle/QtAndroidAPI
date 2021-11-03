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
	
	// QJniObject forward
	MutableDouble::MutableDouble(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MutableDouble::MutableDouble(jdouble arg0)
		: JObject(
			"android.util.MutableDouble",
			"(D)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

