#include "../../../../../JByteArray.hpp"
#include "./InvalidSelectorsException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// QJniObject forward
	InvalidSelectorsException::InvalidSelectorsException(QJniObject obj) : android::net::ipsec::ike::exceptions::IkeProtocolException(obj) {}
	
	// Constructors
	InvalidSelectorsException::InvalidSelectorsException(jint arg0, JByteArray arg1)
		: android::net::ipsec::ike::exceptions::IkeProtocolException(
			"android.net.ipsec.ike.exceptions.InvalidSelectorsException",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	JByteArray InvalidSelectorsException::getIpSecPacketInfo() const
	{
		return callObjectMethod(
			"getIpSecPacketInfo",
			"()[B"
		);
	}
	jint InvalidSelectorsException::getIpSecSpi() const
	{
		return callMethod<jint>(
			"getIpSecSpi",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike::exceptions

