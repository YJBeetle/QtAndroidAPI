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
	
	// QAndroidJniObject forward
	MutableDouble::MutableDouble(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MutableDouble::MutableDouble(jdouble arg0)
		: JObject(
			"android.util.MutableDouble",
			"(D)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

