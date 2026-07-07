#pragma once

#include "../../../../JObject.hpp"

namespace android::net::ipsec::ike
{
	class IkeIdentification : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeIdentification(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IkeIdentification(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::ipsec::ike

