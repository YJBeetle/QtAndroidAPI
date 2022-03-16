#include "../../../JByteArray.hpp"
#include "./EapSessionConfig_EapAkaConfig.hpp"
#include "./EapSessionConfig_EapAkaPrimeConfig.hpp"
#include "./EapSessionConfig_EapMsChapV2Config.hpp"
#include "./EapSessionConfig_EapSimConfig.hpp"
#include "./EapSessionConfig_EapTtlsConfig.hpp"
#include "../../../JObject.hpp"
#include "./EapSessionConfig.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean EapSessionConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::net::eap::EapSessionConfig_EapAkaConfig EapSessionConfig::getEapAkaConfig() const
	{
		return callObjectMethod(
			"getEapAkaConfig",
			"()Landroid/net/eap/EapSessionConfig$EapAkaConfig;"
		);
	}
	android::net::eap::EapSessionConfig_EapAkaPrimeConfig EapSessionConfig::getEapAkaPrimeConfig() const
	{
		return callObjectMethod(
			"getEapAkaPrimeConfig",
			"()Landroid/net/eap/EapSessionConfig$EapAkaPrimeConfig;"
		);
	}
	JByteArray EapSessionConfig::getEapIdentity() const
	{
		return callObjectMethod(
			"getEapIdentity",
			"()[B"
		);
	}
	android::net::eap::EapSessionConfig_EapMsChapV2Config EapSessionConfig::getEapMsChapV2Config() const
	{
		return callObjectMethod(
			"getEapMsChapV2Config",
			"()Landroid/net/eap/EapSessionConfig$EapMsChapV2Config;"
		);
	}
	android::net::eap::EapSessionConfig_EapSimConfig EapSessionConfig::getEapSimConfig() const
	{
		return callObjectMethod(
			"getEapSimConfig",
			"()Landroid/net/eap/EapSessionConfig$EapSimConfig;"
		);
	}
	android::net::eap::EapSessionConfig_EapTtlsConfig EapSessionConfig::getEapTtlsConfig() const
	{
		return callObjectMethod(
			"getEapTtlsConfig",
			"()Landroid/net/eap/EapSessionConfig$EapTtlsConfig;"
		);
	}
	jint EapSessionConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

