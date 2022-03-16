#include "./InvalidMajorVersionException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// Constructors
	InvalidMajorVersionException::InvalidMajorVersionException(jbyte arg0)
		: android::net::ipsec::ike::exceptions::IkeProtocolException(
			"android.net.ipsec.ike.exceptions.InvalidMajorVersionException",
			"(B)V",
			arg0
		) {}
	
	// Methods
	jbyte InvalidMajorVersionException::getMajorVersion() const
	{
		return callMethod<jbyte>(
			"getMajorVersion",
			"()B"
		);
	}
} // namespace android::net::ipsec::ike::exceptions

