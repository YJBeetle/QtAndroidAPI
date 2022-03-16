#pragma once

#include "./ChildSessionParams.hpp"

namespace android::net::ipsec::ike
{
	class TransportModeChildSessionParams : public android::net::ipsec::ike::ChildSessionParams
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TransportModeChildSessionParams(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::ChildSessionParams(className, sig, std::forward<Ts>(agv)...) {}
		TransportModeChildSessionParams(QAndroidJniObject obj) : android::net::ipsec::ike::ChildSessionParams(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::ipsec::ike

