#pragma once

#include "./IkeProtocolException.def.hpp"

namespace android::net::ipsec::ike::exceptions
{
	class InvalidKeException : public android::net::ipsec::ike::exceptions::IkeProtocolException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidKeException(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::exceptions::IkeProtocolException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidKeException(QJniObject obj) : android::net::ipsec::ike::exceptions::IkeProtocolException(obj) {}
		
		// Constructors
		InvalidKeException(jint arg0);
		
		// Methods
		jint getDhGroup() const;
	};
} // namespace android::net::ipsec::ike::exceptions

