#include "./MutableFloat.hpp"

namespace android::util
{
	// Fields
	jfloat MutableFloat::value()
	{
		return __thiz.getField<jfloat>(
			"value"
		);
	}
	
	MutableFloat::MutableFloat(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MutableFloat::MutableFloat(jfloat &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableFloat",
			"(F)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::util

