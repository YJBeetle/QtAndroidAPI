#include "./IntFlagMapping.hpp"

namespace android::view::inspector
{
	// Fields
	
	IntFlagMapping::IntFlagMapping(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IntFlagMapping::IntFlagMapping()
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.IntFlagMapping",
			"()V"
		);
	}
	
	// Methods
	void IntFlagMapping::add(jint arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"add",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void IntFlagMapping::add(jint arg0, jint arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"add",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject IntFlagMapping::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/util/Set;",
			arg0
		);
	}
} // namespace android::view::inspector

