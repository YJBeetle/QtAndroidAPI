#pragma once

#include "../../../../JObject.hpp"

class JObject;

namespace android::net::ipsec::ike
{
	class IkeSessionParams_IkeAuthConfig : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeSessionParams_IkeAuthConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionParams_IkeAuthConfig(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

