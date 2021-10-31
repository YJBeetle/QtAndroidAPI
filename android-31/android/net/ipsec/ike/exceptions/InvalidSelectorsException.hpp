#pragma once

#include "../../../../../__JniBaseClass.hpp"
#include "../../../../../java/lang/Exception.hpp"
#include "./IkeException.hpp"
#include "./IkeProtocolException.hpp"


namespace android::net::ipsec::ike::exceptions
{
	class InvalidSelectorsException : public android::net::ipsec::ike::exceptions::IkeProtocolException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidSelectorsException(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::exceptions::IkeProtocolException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidSelectorsException(QJniObject obj);
		
		// Constructors
		InvalidSelectorsException(jint arg0, jbyteArray arg1);
		
		// Methods
		jbyteArray getIpSecPacketInfo();
		jint getIpSecSpi();
	};
} // namespace android::net::ipsec::ike::exceptions

