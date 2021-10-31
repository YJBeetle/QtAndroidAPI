#include "./IntFlagMapping.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QJniObject forward
	IntFlagMapping::IntFlagMapping(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	IntFlagMapping::IntFlagMapping()
		: __JniBaseClass(
			"android.view.inspector.IntFlagMapping",
			"()V"
		) {}
	
	// Methods
	void IntFlagMapping::add(jint arg0, jint arg1, jstring arg2)
	{
		callMethod<void>(
			"add",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass IntFlagMapping::get(jint arg0)
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
} // namespace android::view::inspector

