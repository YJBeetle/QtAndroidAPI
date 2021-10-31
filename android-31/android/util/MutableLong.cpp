#include "./MutableLong.hpp"

namespace android::util
{
	// Fields
	jlong MutableLong::value()
	{
		return getField<jlong>(
			"value"
		);
	}
	
	// QAndroidJniObject forward
	MutableLong::MutableLong(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MutableLong::MutableLong(jlong arg0)
		: __JniBaseClass(
			"android.util.MutableLong",
			"(J)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

