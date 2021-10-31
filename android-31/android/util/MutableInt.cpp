#include "./MutableInt.hpp"

namespace android::util
{
	// Fields
	jint MutableInt::value()
	{
		return getField<jint>(
			"value"
		);
	}
	
	// QAndroidJniObject forward
	MutableInt::MutableInt(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MutableInt::MutableInt(jint arg0)
		: __JniBaseClass(
			"android.util.MutableInt",
			"(I)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util
