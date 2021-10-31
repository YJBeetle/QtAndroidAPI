#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::net::ipsec::ike
{
	class IkeIdentification : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeIdentification(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IkeIdentification(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::ipsec::ike

