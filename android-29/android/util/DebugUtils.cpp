#include "../../JObject.hpp"
#include "./DebugUtils.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	DebugUtils::DebugUtils(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean DebugUtils::isObjectSelected(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.DebugUtils",
			"isObjectSelected",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace android::util

