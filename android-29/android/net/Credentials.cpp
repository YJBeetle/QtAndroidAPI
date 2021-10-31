#include "./Credentials.hpp"

namespace android::net
{
	// Fields
	
	Credentials::Credentials(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Credentials::Credentials(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.net.Credentials",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint Credentials::getGid()
	{
		return __thiz.callMethod<jint>(
			"getGid",
			"()I"
		);
	}
	jint Credentials::getPid()
	{
		return __thiz.callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	jint Credentials::getUid()
	{
		return __thiz.callMethod<jint>(
			"getUid",
			"()I"
		);
	}
} // namespace android::net

