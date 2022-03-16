#pragma once

#include "../../../../JObject.hpp"

namespace android::net::ipsec::ike
{
	class IkeIdentification : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeIdentification(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IkeIdentification(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::ipsec::ike

