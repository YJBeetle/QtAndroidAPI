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
		
		// QJniObject forward
		template<typename ...Ts> explicit EapSessionConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::net::eap::EapSessionConfig_EapAkaConfig getEapAkaConfig() const;
		android::net::eap::EapSessionConfig_EapAkaPrimeConfig getEapAkaPrimeConfig() const;
		JByteArray getEapIdentity() const;
		android::net::eap::EapSessionConfig_EapMsChapV2Config getEapMsChapV2Config() const;
		android::net::eap::EapSessionConfig_EapSimConfig getEapSimConfig() const;
		android::net::eap::EapSessionConfig_EapTtlsConfig getEapTtlsConfig() const;
		jint hashCode() const;
	};
} // namespace android::net::eap

