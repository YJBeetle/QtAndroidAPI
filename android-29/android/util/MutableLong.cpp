#include "./MutableLong.hpp"

namespace android::util
{
	// Fields
	jlong MutableLong::value()
	{
		return __thiz.getField<jlong>(
			"value"
		);
	}
	
	MutableLong::MutableLong(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MutableLong::MutableLong(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.MutableLong",
			"(J)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::util

