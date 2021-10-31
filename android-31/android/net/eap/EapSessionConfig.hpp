#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::net::eap
{
	class EapSessionConfig : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EapSessionConfig(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		android::net::eap::EapSessionConfig_EapAkaConfig getEapAkaConfig();
		android::net::eap::EapSessionConfig_EapAkaPrimeConfig getEapAkaPrimeConfig();
		jbyteArray getEapIdentity();
		android::net::eap::EapSessionConfig_EapMsChapV2Config getEapMsChapV2Config();
		android::net::eap::EapSessionConfig_EapSimConfig getEapSimConfig();
		android::net::eap::EapSessionConfig_EapTtlsConfig getEapTtlsConfig();
		jint hashCode();
	};
} // namespace android::net::eap

