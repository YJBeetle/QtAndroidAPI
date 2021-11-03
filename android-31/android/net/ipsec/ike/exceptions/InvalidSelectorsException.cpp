#include "../../../../../JByteArray.hpp"
#include "./InvalidSelectorsException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// QAndroidJniObject forward
	InvalidSelectorsException::InvalidSelectorsException(QAndroidJniObject obj) : android::net::ipsec::ike::exceptions::IkeProtocolException(obj) {}
	
	// Constructors
	InvalidSelectorsException::InvalidSelectorsException(jint arg0, JByteArray arg1)
		: android::net::ipsec::ike::exceptions::IkeProtocolException(
			"android.net.ipsec.ike.exceptions.InvalidSelectorsException",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	JByteArray InvalidSelectorsException::getIpSecPacketInfo()
	{
		return callObjectMethod(
			"getIpSecPacketInfo",
			"()[B"
		);
	}
	jint InvalidSelectorsException::getIpSecSpi()
	{
		return callMethod<jint>(
			"getIpSecSpi",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike::exceptions

