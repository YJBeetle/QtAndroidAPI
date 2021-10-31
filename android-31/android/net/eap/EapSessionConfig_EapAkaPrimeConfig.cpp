#include "./EapSessionConfig_EapAkaPrimeConfig.hpp"

namespace android::net::eap
{
	// Fields
	
	// QJniObject forward
	EapSessionConfig_EapAkaPrimeConfig::EapSessionConfig_EapAkaPrimeConfig(QJniObject obj) : android::net::eap::EapSessionConfig_EapAkaConfig(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EapSessionConfig_EapAkaPrimeConfig::allowsMismatchedNetworkNames()
	{
		return callMethod<jboolean>(
			"allowsMismatchedNetworkNames",
			"()Z"
		);
	}
	jboolean EapSessionConfig_EapAkaPrimeConfig::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring EapSessionConfig_EapAkaPrimeConfig::getNetworkName()
	{
		return callObjectMethod(
			"getNetworkName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint EapSessionConfig_EapAkaPrimeConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

