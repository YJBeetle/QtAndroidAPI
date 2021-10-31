#include "./MutableShort.hpp"

namespace android::util
{
	// Fields
	jshort MutableShort::value()
	{
		return __thiz.getField<jshort>(
			"value"
		);
	}
	
	MutableShort::MutableShort(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MutableShort::MutableShort(jshort arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableShort",
			"(S)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::util

