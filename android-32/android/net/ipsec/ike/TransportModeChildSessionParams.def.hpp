#pragma once

#include "./ChildSessionParams.def.hpp"

namespace android::net::ipsec::ike
{
	class TransportModeChildSessionParams : public android::net::ipsec::ike::ChildSessionParams
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TransportModeChildSessionParams(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::ChildSessionParams(className, sig, std::forward<Ts>(agv)...) {}
		TransportModeChildSessionParams(QJniObject obj) : android::net::ipsec::ike::ChildSessionParams(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::ipsec::ike

