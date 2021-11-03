#pragma once

#include "../../../../JObject.hpp"

class JObject;

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
		jboolean equals(JObject arg0) const;
		JObject getChildSaProposals() const;
		jint getHardLifetimeSeconds() const;
		JObject getInboundTrafficSelectors() const;
		JObject getOutboundTrafficSelectors() const;
		jint getSoftLifetimeSeconds() const;
		jint hashCode() const;
	};
} // namespace android::net::ipsec::ike

