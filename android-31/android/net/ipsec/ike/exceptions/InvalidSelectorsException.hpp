#pragma once

#include "./IkeProtocolException.hpp"

class JByteArray;

namespace android::net::ipsec::ike::exceptions
{
	class InvalidSelectorsException : public android::net::ipsec::ike::exceptions::IkeProtocolException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidSelectorsException(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::exceptions::IkeProtocolException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidSelectorsException(QAndroidJniObject obj);
		
		// Constructors
		InvalidSelectorsException(jint arg0, JByteArray arg1);
		
		// Methods
		JByteArray getIpSecPacketInfo();
		jint getIpSecSpi();
	};
} // namespace android::net::ipsec::ike::exceptions

