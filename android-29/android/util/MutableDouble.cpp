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
	MutableDouble::MutableDouble(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MutableDouble::MutableDouble(jdouble arg0)
		: __JniBaseClass(
			"android.util.MutableDouble",
			"(D)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

