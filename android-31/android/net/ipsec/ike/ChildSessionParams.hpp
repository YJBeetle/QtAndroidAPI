#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::net::ipsec::ike
{
	class ChildSessionParams : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ChildSessionParams(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ChildSessionParams(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		__JniBaseClass getChildSaProposals();
		jint getHardLifetimeSeconds();
		__JniBaseClass getInboundTrafficSelectors();
		__JniBaseClass getOutboundTrafficSelectors();
		jint getSoftLifetimeSeconds();
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

