#include "../../../JObject.hpp"
#include "./EapSessionConfig_EapMethodConfig.hpp"

namespace android::net::eap
{
	// Fields
	jint EapSessionConfig_EapMethodConfig::EAP_TYPE_AKA()
	{
		return getStaticField<jint>(
			"android.net.eap.EapSessionConfig$EapMethodConfig",
			"EAP_TYPE_AKA"
		);
	}
	jint EapSessionConfig_EapMethodConfig::EAP_TYPE_AKA_PRIME()
	{
		return getStaticField<jint>(
			"android.net.eap.EapSessionConfig$EapMethodConfig",
			"EAP_TYPE_AKA_PRIME"
		);
	}
	jint EapSessionConfig_EapMethodConfig::EAP_TYPE_MSCHAP_V2()
	{
		return getStaticField<jint>(
			"android.net.eap.EapSessionConfig$EapMethodConfig",
			"EAP_TYPE_MSCHAP_V2"
		);
	}
	jint EapSessionConfig_EapMethodConfig::EAP_TYPE_SIM()
	{
		return getStaticField<jint>(
			"android.net.eap.EapSessionConfig$EapMethodConfig",
			"EAP_TYPE_SIM"
		);
	}
	jint EapSessionConfig_EapMethodConfig::EAP_TYPE_TTLS()
	{
		return getStaticField<jint>(
			"android.net.eap.EapSessionConfig$EapMethodConfig",
			"EAP_TYPE_TTLS"
		);
	}
	
	// Constructors
	
	// Methods
	jboolean EapSessionConfig_EapMethodConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint EapSessionConfig_EapMethodConfig::getMethodType() const
	{
		return callMethod<jint>(
			"getMethodType",
			"()I"
		);
	}
	jint EapSessionConfig_EapMethodConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

