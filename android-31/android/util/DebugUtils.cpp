#include "./DebugUtils.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	DebugUtils::DebugUtils(QJniObject obj) : __JniBaseClass(obj) {}
	
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

