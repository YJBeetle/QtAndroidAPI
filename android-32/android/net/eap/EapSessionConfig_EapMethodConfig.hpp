#pragma once

#include "../../../JObject.hpp"
#include "./EapSessionConfig_EapMethodConfig.def.hpp"

namespace android::net::eap
{
	// Fields
	inline jint EapSessionConfig_EapMethodConfig::EAP_TYPE_AKA()
	{
		return getStaticField<jint>(
			"android.net.eap.EapSessionConfig$EapMethodConfig",
			"EAP_TYPE_AKA"
		);
	}
	inline jint EapSessionConfig_EapMethodConfig::EAP_TYPE_AKA_PRIME()
	{
		return getStaticField<jint>(
			"android.net.eap.EapSessionConfig$EapMethodConfig",
			"EAP_TYPE_AKA_PRIME"
		);
	}
	inline jint EapSessionConfig_EapMethodConfig::EAP_TYPE_MSCHAP_V2()
	{
		return getStaticField<jint>(
			"android.net.eap.EapSessionConfig$EapMethodConfig",
			"EAP_TYPE_MSCHAP_V2"
		);
	}
	inline jint EapSessionConfig_EapMethodConfig::EAP_TYPE_SIM()
	{
		return getStaticField<jint>(
			"android.net.eap.EapSessionConfig$EapMethodConfig",
			"EAP_TYPE_SIM"
		);
	}
	inline jint EapSessionConfig_EapMethodConfig::EAP_TYPE_TTLS()
	{
		return getStaticField<jint>(
			"android.net.eap.EapSessionConfig$EapMethodConfig",
			"EAP_TYPE_TTLS"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean EapSessionConfig_EapMethodConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint EapSessionConfig_EapMethodConfig::getMethodType() const
	{
		return callMethod<jint>(
			"getMethodType",
			"()I"
		);
	}
	inline jint EapSessionConfig_EapMethodConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::eap;
#endif
