#pragma once

#include "../../../../JObject.hpp"
#include "./IkeSessionParams_IkeAuthConfig.hpp"


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
		jboolean equals(jobject arg0);
		jbyteArray getPsk();
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

