#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::net::ipsec::ike
{
	class IkeSessionParams_IkeAuthConfig : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeSessionParams_IkeAuthConfig(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionParams_IkeAuthConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

