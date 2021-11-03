#include "./Credentials.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	Credentials::Credentials(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Credentials::Credentials(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.net.Credentials",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint Credentials::getGid()
	{
		return callMethod<jint>(
			"getGid",
			"()I"
		);
	}
	jint Credentials::getPid()
	{
		return callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	jint Credentials::getUid()
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
} // namespace android::net

