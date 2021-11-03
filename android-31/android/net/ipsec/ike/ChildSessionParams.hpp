#pragma once

#include "../../../../JObject.hpp"

class JObject;

namespace android::net::ipsec::ike
{
	class ChildSessionParams : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ChildSessionParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChildSessionParams(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JObject getChildSaProposals();
		jint getHardLifetimeSeconds();
		JObject getInboundTrafficSelectors();
		JObject getOutboundTrafficSelectors();
		jint getSoftLifetimeSeconds();
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

