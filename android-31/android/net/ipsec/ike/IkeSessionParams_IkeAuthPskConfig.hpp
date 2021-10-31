#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./IkeSessionParams_IkeAuthConfig.hpp"


namespace android::net::ipsec::ike
{
	class IkeSessionParams_IkeAuthPskConfig : public android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeSessionParams_IkeAuthPskConfig(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionParams_IkeAuthPskConfig(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getPsk();
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

