#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::net::eap
{
	class EapSessionConfig_EapAkaConfig;
}
namespace android::net::eap
{
	class EapSessionConfig_EapAkaPrimeConfig;
}
namespace android::net::eap
{
	class EapSessionConfig_EapMsChapV2Config;
}
namespace android::net::eap
{
	class EapSessionConfig_EapSimConfig;
}
namespace android::net::eap
{
	class EapSessionConfig_EapTtlsConfig;
}
class JObject;

namespace android::net::eap
{
	class EapSessionConfig : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EapSessionConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		android::net::eap::EapSessionConfig_EapAkaConfig getEapAkaConfig();
		android::net::eap::EapSessionConfig_EapAkaPrimeConfig getEapAkaPrimeConfig();
		JByteArray getEapIdentity();
		android::net::eap::EapSessionConfig_EapMsChapV2Config getEapMsChapV2Config();
		android::net::eap::EapSessionConfig_EapSimConfig getEapSimConfig();
		android::net::eap::EapSessionConfig_EapTtlsConfig getEapTtlsConfig();
		jint hashCode();
	};
} // namespace android::net::eap

