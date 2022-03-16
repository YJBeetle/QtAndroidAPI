#include "../../../JObject.hpp"
#include "./EapSessionConfig_EapAkaConfig.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean EapSessionConfig_EapAkaConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint EapSessionConfig_EapAkaConfig::getAppType() const
	{
		return callMethod<jint>(
			"getAppType",
			"()I"
		);
	}
	jint EapSessionConfig_EapAkaConfig::getSubId() const
	{
		return callMethod<jint>(
			"getSubId",
			"()I"
		);
	}
	jint EapSessionConfig_EapAkaConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

