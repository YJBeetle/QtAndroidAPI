#include "./DebugUtils.hpp"

namespace android::util
{
	// Fields
	
	DebugUtils::DebugUtils(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean DebugUtils::isObjectSelected(jobject arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.DebugUtils",
			"isObjectSelected",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace android::util

