#include "../../../JObject.hpp"
#include "./EapSessionConfig_EapSimConfig.hpp"

namespace android::net::eap
{
	// Fields
	
	// QAndroidJniObject forward
	EapSessionConfig_EapSimConfig::EapSessionConfig_EapSimConfig(QAndroidJniObject obj) : android::net::eap::EapSessionConfig_EapMethodConfig(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EapSessionConfig_EapSimConfig::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint EapSessionConfig_EapSimConfig::getAppType()
	{
		return callMethod<jint>(
			"getAppType",
			"()I"
		);
	}
	jint EapSessionConfig_EapSimConfig::getSubId()
	{
		return callMethod<jint>(
			"getSubId",
			"()I"
		);
	}
	jint EapSessionConfig_EapSimConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

