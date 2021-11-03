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
		EapSessionConfig_EapSimConfig(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		jint getAppType();
		jint getSubId();
		jint hashCode();
	};
} // namespace android::net::eap

