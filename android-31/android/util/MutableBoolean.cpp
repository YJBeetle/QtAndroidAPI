#include "./MutableBoolean.hpp"

namespace android::util
{
	// Fields
	jboolean MutableBoolean::value()
	{
		return getField<jboolean>(
			"value"
		);
	}
	
	// QAndroidJniObject forward
	MutableBoolean::MutableBoolean(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MutableBoolean::MutableBoolean(jboolean arg0)
		: __JniBaseClass(
			"android.util.MutableBoolean",
			"(Z)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

