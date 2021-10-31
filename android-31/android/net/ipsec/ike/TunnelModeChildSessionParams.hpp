#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./ChildSessionParams.hpp"


namespace android::net::ipsec::ike
{
	class TunnelModeChildSessionParams : public android::net::ipsec::ike::ChildSessionParams
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TunnelModeChildSessionParams(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::ChildSessionParams(className, sig, std::forward<Ts>(agv)...) {}
		TunnelModeChildSessionParams(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		__JniBaseClass getConfigurationRequests();
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

