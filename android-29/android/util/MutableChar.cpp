#include "./MutableChar.hpp"

namespace android::util
{
	// Fields
	jchar MutableChar::value()
	{
		return __thiz.getField<jchar>(
			"value"
		);
	}
	
	MutableChar::MutableChar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MutableChar::MutableChar(jchar arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableChar",
			"(C)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::util

