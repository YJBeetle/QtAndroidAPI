#include "./WebStorage_Origin.hpp"

namespace android::webkit
{
	// Fields
	
	WebStorage_Origin::WebStorage_Origin(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring WebStorage_Origin::getOrigin()
	{
		return __thiz.callObjectMethod(
			"getOrigin",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong WebStorage_Origin::getQuota()
	{
		return __thiz.callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
	jlong WebStorage_Origin::getUsage()
	{
		return __thiz.callMethod<jlong>(
			"getUsage",
			"()J"
		);
	}
} // namespace android::webkit

