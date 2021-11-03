#include "../../JString.hpp"
#include "./WebStorage_Origin.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	WebStorage_Origin::WebStorage_Origin(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString WebStorage_Origin::getOrigin() const
	{
		return callObjectMethod(
			"getOrigin",
			"()Ljava/lang/String;"
		);
	}
	jlong WebStorage_Origin::getQuota() const
	{
		return callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
	jlong WebStorage_Origin::getUsage() const
	{
		return callMethod<jlong>(
			"getUsage",
			"()J"
		);
	}
} // namespace android::webkit

