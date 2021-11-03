#pragma once

#include "./EapSessionConfig_EapMethodConfig.hpp"

namespace android::net::eap
{
	class EapSessionConfig;
}
class JObject;
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::eap
{
	class EapSessionConfig_EapTtlsConfig : public android::net::eap::EapSessionConfig_EapMethodConfig
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EapSessionConfig_EapTtlsConfig(const char *className, const char *sig, Ts...agv) : android::net::eap::EapSessionConfig_EapMethodConfig(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig_EapTtlsConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		android::net::eap::EapSessionConfig getInnerEapSessionConfig();
		java::security::cert::X509Certificate getServerCaCert();
		jint hashCode();
	};
} // namespace android::net::eap

