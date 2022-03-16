#pragma once

#include "./EapSessionConfig_EapMethodConfig.hpp"

class JObject;

namespace android::net::eap
{
	class EapSessionConfig_EapSimConfig : public android::net::eap::EapSessionConfig_EapMethodConfig
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EapSessionConfig_EapSimConfig(const char *className, const char *sig, Ts...agv) : android::net::eap::EapSessionConfig_EapMethodConfig(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig_EapSimConfig(QAndroidJniObject obj) : android::net::eap::EapSessionConfig_EapMethodConfig(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getAppType() const;
		jint getSubId() const;
		jint hashCode() const;
	};
} // namespace android::net::eap

