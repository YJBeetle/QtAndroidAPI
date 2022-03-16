#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./EapSessionConfig_EapMsChapV2Config.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean EapSessionConfig_EapMsChapV2Config::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString EapSessionConfig_EapMsChapV2Config::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	JString EapSessionConfig_EapMsChapV2Config::getUsername() const
	{
		return callObjectMethod(
			"getUsername",
			"()Ljava/lang/String;"
		);
	}
	jint EapSessionConfig_EapMsChapV2Config::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

