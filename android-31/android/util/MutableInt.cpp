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
	MutableInt::MutableInt(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MutableInt::MutableInt(jint arg0)
		: JObject(
			"android.util.MutableInt",
			"(I)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

