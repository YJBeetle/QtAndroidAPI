#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::net::ipsec::ike
{
	class ChildSessionConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ChildSessionConfiguration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ChildSessionConfiguration(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getInboundTrafficSelectors();
		__JniBaseClass getOutboundTrafficSelectors();
	};
} // namespace android::net::ipsec::ike

