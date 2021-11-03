#include "../../JString.hpp"
#include "./WebStorage_Origin.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	WebStorage_Origin::WebStorage_Origin(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString WebStorage_Origin::getOrigin()
	{
		return callObjectMethod(
			"getOrigin",
			"()Ljava/lang/String;"
		);
	}
	jlong WebStorage_Origin::getQuota()
	{
		return callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
	jlong WebStorage_Origin::getUsage()
	{
		return callMethod<jlong>(
			"getUsage",
			"()J"
		);
	}
} // namespace android::webkit

