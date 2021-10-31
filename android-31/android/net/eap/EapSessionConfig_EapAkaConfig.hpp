#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./EapSessionConfig_EapMethodConfig.hpp"


namespace android::net::eap
{
	class EapSessionConfig_EapAkaConfig : public android::net::eap::EapSessionConfig_EapMethodConfig
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EapSessionConfig_EapAkaConfig(const char *className, const char *sig, Ts...agv) : android::net::eap::EapSessionConfig_EapMethodConfig(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig_EapAkaConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint getAppType();
		jint getSubId();
		jint hashCode();
	};
} // namespace android::net::eap

