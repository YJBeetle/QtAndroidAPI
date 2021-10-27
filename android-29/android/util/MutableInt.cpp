#include "./MutableInt.hpp"

namespace android::util
{
	// Fields
	jint MutableInt::value()
	{
		return __thiz.getField<jint>(
			"value"
		);
	}
	
	MutableInt::MutableInt(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MutableInt::MutableInt(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableInt",
			"(I)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::util

