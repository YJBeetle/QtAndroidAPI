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
	
	// QAndroidJniObject forward
	EapSessionConfig_EapMethodConfig::EapSessionConfig_EapMethodConfig(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EapSessionConfig_EapMethodConfig::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint EapSessionConfig_EapMethodConfig::getMethodType()
	{
		return callMethod<jint>(
			"getMethodType",
			"()I"
		);
	}
	jint EapSessionConfig_EapMethodConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

