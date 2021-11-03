#pragma once

#include "./EapSessionConfig_EapMethodConfig.hpp"

class JObject;
class JString;

namespace android::net::eap
{
	class EapSessionConfig_EapMsChapV2Config : public android::net::eap::EapSessionConfig_EapMethodConfig
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EapSessionConfig_EapMsChapV2Config(const char *className, const char *sig, Ts...agv) : android::net::eap::EapSessionConfig_EapMethodConfig(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig_EapMsChapV2Config(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getPassword() const;
		JString getUsername() const;
		jint hashCode() const;
	};
} // namespace android::net::eap

