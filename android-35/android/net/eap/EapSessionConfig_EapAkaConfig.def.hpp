#pragma once

#include "./EapSessionConfig_EapMethodConfig.def.hpp"

namespace android::net::eap
{
	class EapSessionConfig_EapAkaOption;
}
class JObject;

namespace android::net::eap
{
	class EapSessionConfig_EapAkaConfig : public android::net::eap::EapSessionConfig_EapMethodConfig
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EapSessionConfig_EapAkaConfig(const char *className, const char *sig, Ts...agv) : android::net::eap::EapSessionConfig_EapMethodConfig(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig_EapAkaConfig(QJniObject obj) : android::net::eap::EapSessionConfig_EapMethodConfig(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getAppType() const;
		android::net::eap::EapSessionConfig_EapAkaOption getEapAkaOption() const;
		jint getSubId() const;
		jint hashCode() const;
	};
} // namespace android::net::eap

