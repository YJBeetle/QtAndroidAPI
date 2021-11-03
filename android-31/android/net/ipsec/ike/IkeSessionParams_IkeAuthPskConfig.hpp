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
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeSessionParams_IkeAuthPskConfig(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionParams_IkeAuthPskConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JByteArray getPsk() const;
		jint hashCode() const;
	};
} // namespace android::net::ipsec::ike

