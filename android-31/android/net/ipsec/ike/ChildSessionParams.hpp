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
		jboolean equals(JObject arg0) const;
		JObject getChildSaProposals() const;
		jint getHardLifetimeSeconds() const;
		JObject getInboundTrafficSelectors() const;
		JObject getOutboundTrafficSelectors() const;
		jint getSoftLifetimeSeconds() const;
		jint hashCode() const;
	};
} // namespace android::net::ipsec::ike

