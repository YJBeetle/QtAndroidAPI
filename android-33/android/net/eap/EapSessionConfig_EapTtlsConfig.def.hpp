#pragma once

#include "./EapSessionConfig_EapMethodConfig.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EapSessionConfig_EapTtlsConfig(const char *className, const char *sig, Ts...agv) : android::net::eap::EapSessionConfig_EapMethodConfig(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig_EapTtlsConfig(QAndroidJniObject obj) : android::net::eap::EapSessionConfig_EapMethodConfig(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::net::eap::EapSessionConfig getInnerEapSessionConfig() const;
		java::security::cert::X509Certificate getServerCaCert() const;
		jint hashCode() const;
	};
} // namespace android::net::eap

