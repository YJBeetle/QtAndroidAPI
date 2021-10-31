#include "./MutableChar.hpp"

namespace android::util
{
	// Fields
	jchar MutableChar::value()
	{
		return getField<jchar>(
			"value"
		);
	}
	
	// QAndroidJniObject forward
	MutableChar::MutableChar(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MutableChar::MutableChar(jchar arg0)
		: __JniBaseClass(
			"android.util.MutableChar",
			"(C)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

