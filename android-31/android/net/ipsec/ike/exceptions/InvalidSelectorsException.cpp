#include "./InvalidSelectorsException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// QJniObject forward
	InvalidSelectorsException::InvalidSelectorsException(QJniObject obj) : android::net::ipsec::ike::exceptions::IkeProtocolException(obj) {}
	
	// Constructors
	InvalidSelectorsException::InvalidSelectorsException(jint arg0, jbyteArray arg1)
		: android::net::ipsec::ike::exceptions::IkeProtocolException(
			"android.net.ipsec.ike.exceptions.InvalidSelectorsException",
			"(I[B)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jbyteArray InvalidSelectorsException::getIpSecPacketInfo()
	{
		return callObjectMethod(
			"getIpSecPacketInfo",
			"()[B"
		).object<jbyteArray>();
	}
	jint InvalidSelectorsException::getIpSecSpi()
	{
		return callMethod<jint>(
			"getIpSecSpi",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike::exceptions

