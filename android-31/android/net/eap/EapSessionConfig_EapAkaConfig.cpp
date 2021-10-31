#include "./EapSessionConfig_EapAkaConfig.hpp"

namespace android::net::eap
{
	// Fields
	
	// QAndroidJniObject forward
	EapSessionConfig_EapAkaConfig::EapSessionConfig_EapAkaConfig(QAndroidJniObject obj) : android::net::eap::EapSessionConfig_EapMethodConfig(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EapSessionConfig_EapAkaConfig::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint EapSessionConfig_EapAkaConfig::getAppType()
	{
		return callMethod<jint>(
			"getAppType",
			"()I"
		);
	}
	jint EapSessionConfig_EapAkaConfig::getSubId()
	{
		return callMethod<jint>(
			"getSubId",
			"()I"
		);
	}
	jint EapSessionConfig_EapAkaConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

