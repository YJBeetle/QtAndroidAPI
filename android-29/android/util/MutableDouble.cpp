#include "./MutableDouble.hpp"

namespace android::util
{
	// Fields
	jdouble MutableDouble::value()
	{
		return __thiz.getField<jdouble>(
			"value"
		);
	}
	
	MutableDouble::MutableDouble(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MutableDouble::MutableDouble(jdouble &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableDouble",
			"(D)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::util

