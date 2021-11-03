#pragma once

#include "../../../../JObject.hpp"


namespace android::net::ipsec::ike
{
	class ChildSessionParams : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ChildSessionParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChildSessionParams(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		JObject getChildSaProposals();
		jint getHardLifetimeSeconds();
		JObject getInboundTrafficSelectors();
		JObject getOutboundTrafficSelectors();
		jint getSoftLifetimeSeconds();
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

