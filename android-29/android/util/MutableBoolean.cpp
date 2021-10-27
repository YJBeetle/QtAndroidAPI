#include "./MutableBoolean.hpp"

namespace android::util
{
	// Fields
	jboolean MutableBoolean::value()
	{
		return __thiz.getField<jboolean>(
			"value"
		);
	}
	
	MutableBoolean::MutableBoolean(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MutableBoolean::MutableBoolean(jboolean &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableBoolean",
			"(Z)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::util

