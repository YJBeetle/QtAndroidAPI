#pragma once

#include "./EapSessionConfig_EapAkaConfig.hpp"

class JObject;
class JString;

namespace android::net::eap
{
	class EapSessionConfig_EapAkaPrimeConfig : public android::net::eap::EapSessionConfig_EapAkaConfig
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EapSessionConfig_EapAkaPrimeConfig(const char *className, const char *sig, Ts...agv) : android::net::eap::EapSessionConfig_EapAkaConfig(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig_EapAkaPrimeConfig(QAndroidJniObject obj) : android::net::eap::EapSessionConfig_EapAkaConfig(obj) {}
		
		// Constructors
		
		// Methods
		jboolean allowsMismatchedNetworkNames() const;
		jboolean equals(JObject arg0) const;
		JString getNetworkName() const;
		jint hashCode() const;
	};
} // namespace android::net::eap

