#include "./Credentials.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	Credentials::Credentials(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Credentials::Credentials(jint arg0, jint arg1, jint arg2)
		: __JniBaseClass(
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

