#pragma once

#include "./IkeSessionParams_IkeAuthConfig.hpp"

class JByteArray;
class JObject;

namespace android::net::ipsec::ike
{
	class IkeSessionParams_IkeAuthPskConfig : public android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeSessionParams_IkeAuthPskConfig(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionParams_IkeAuthPskConfig(QAndroidJniObject obj) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JByteArray getPsk() const;
		jint hashCode() const;
	};
} // namespace android::net::ipsec::ike

