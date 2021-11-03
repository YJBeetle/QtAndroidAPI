#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./EapSessionConfig_EapMsChapV2Config.hpp"

namespace android::net::eap
{
	// Fields
	
	// QAndroidJniObject forward
	EapSessionConfig_EapMsChapV2Config::EapSessionConfig_EapMsChapV2Config(QAndroidJniObject obj) : android::net::eap::EapSessionConfig_EapMethodConfig(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EapSessionConfig_EapMsChapV2Config::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString EapSessionConfig_EapMsChapV2Config::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	JString EapSessionConfig_EapMsChapV2Config::getUsername()
	{
		return callObjectMethod(
			"getUsername",
			"()Ljava/lang/String;"
		);
	}
	jint EapSessionConfig_EapMsChapV2Config::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

