#pragma once

#include "./IkeSessionParams_IkeAuthConfig.def.hpp"

namespace android::net::eap
{
	class EapSessionConfig;
}
class JObject;

namespace android::net::ipsec::ike
{
	class IkeSessionParams_IkeAuthEapConfig : public android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeSessionParams_IkeAuthEapConfig(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionParams_IkeAuthEapConfig(QAndroidJniObject obj) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::net::eap::EapSessionConfig getEapConfig() const;
		jint hashCode() const;
	};
} // namespace android::net::ipsec::ike

