#include "./Credentials.hpp"

namespace android::net
{
	// Fields
	
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
	jint Credentials::getGid() const
	{
		return callMethod<jint>(
			"getGid",
			"()I"
		);
	}
	jint Credentials::getPid() const
	{
		return callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	jint Credentials::getUid() const
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
} // namespace android::net

