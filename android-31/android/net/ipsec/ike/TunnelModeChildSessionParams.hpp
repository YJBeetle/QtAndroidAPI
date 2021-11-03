#pragma once

#include "../../../../JObject.hpp"
#include "./ChildSessionParams.hpp"


namespace android::net::ipsec::ike
{
	class TunnelModeChildSessionParams : public android::net::ipsec::ike::ChildSessionParams
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TunnelModeChildSessionParams(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::ChildSessionParams(className, sig, std::forward<Ts>(agv)...) {}
		TunnelModeChildSessionParams(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		JObject getConfigurationRequests();
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

