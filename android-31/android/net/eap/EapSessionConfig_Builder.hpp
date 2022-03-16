#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::net::eap
{
	class EapSessionConfig;
}
class JString;
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::eap
{
	class EapSessionConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EapSessionConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		EapSessionConfig_Builder();
		
		// Methods
		android::net::eap::EapSessionConfig build() const;
		android::net::eap::EapSessionConfig_Builder setEapAkaConfig(jint arg0, jint arg1) const;
		android::net::eap::EapSessionConfig_Builder setEapAkaPrimeConfig(jint arg0, jint arg1, JString arg2, jboolean arg3) const;
		android::net::eap::EapSessionConfig_Builder setEapIdentity(JByteArray arg0) const;
		android::net::eap::EapSessionConfig_Builder setEapMsChapV2Config(JString arg0, JString arg1) const;
		android::net::eap::EapSessionConfig_Builder setEapSimConfig(jint arg0, jint arg1) const;
		android::net::eap::EapSessionConfig_Builder setEapTtlsConfig(java::security::cert::X509Certificate arg0, android::net::eap::EapSessionConfig arg1) const;
	};
} // namespace android::net::eap

