#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./EapSessionConfig_EapMethodConfig.hpp"
#include "./EapSessionConfig_EapAkaConfig.hpp"


namespace android::net::eap
{
	class EapSessionConfig_EapAkaPrimeConfig : public android::net::eap::EapSessionConfig_EapAkaConfig
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EapSessionConfig_EapAkaPrimeConfig(const char *className, const char *sig, Ts...agv) : android::net::eap::EapSessionConfig_EapAkaConfig(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig_EapAkaPrimeConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean allowsMismatchedNetworkNames();
		jboolean equals(jobject arg0);
		jstring getNetworkName();
		jint hashCode();
	};
} // namespace android::net::eap

