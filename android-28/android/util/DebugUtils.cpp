#include "./DebugUtils.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	DebugUtils::DebugUtils(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean DebugUtils::isObjectSelected(jobject arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.DebugUtils",
			"isObjectSelected",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::util

