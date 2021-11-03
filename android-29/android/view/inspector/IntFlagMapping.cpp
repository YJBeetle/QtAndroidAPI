#include "../../../JString.hpp"
#include "./IntFlagMapping.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QAndroidJniObject forward
	IntFlagMapping::IntFlagMapping(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	IntFlagMapping::IntFlagMapping()
		: JObject(
			"android.view.inspector.IntFlagMapping",
			"()V"
		) {}
	
	// Methods
	void IntFlagMapping::add(jint arg0, jint arg1, JString arg2)
	{
		callMethod<void>(
			"add",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	JObject IntFlagMapping::get(jint arg0)
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
} // namespace android::view::inspector

