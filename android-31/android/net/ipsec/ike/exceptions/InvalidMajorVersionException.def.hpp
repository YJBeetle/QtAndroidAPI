#pragma once

#include "./IkeProtocolException.def.hpp"

namespace android::net::ipsec::ike::exceptions
{
	class InvalidMajorVersionException : public android::net::ipsec::ike::exceptions::IkeProtocolException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidMajorVersionException(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::exceptions::IkeProtocolException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidMajorVersionException(QAndroidJniObject obj) : android::net::ipsec::ike::exceptions::IkeProtocolException(obj) {}
		
		// Constructors
		InvalidMajorVersionException(jbyte arg0);
		
		// Methods
		jbyte getMajorVersion() const;
	};
} // namespace android::net::ipsec::ike::exceptions

