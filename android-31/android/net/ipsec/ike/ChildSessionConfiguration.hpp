#pragma once

#include "../../../../JObject.hpp"


namespace android::net::ipsec::ike
{
	class ChildSessionConfiguration : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ChildSessionConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChildSessionConfiguration(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getInboundTrafficSelectors();
		JObject getOutboundTrafficSelectors();
	};
} // namespace android::net::ipsec::ike

