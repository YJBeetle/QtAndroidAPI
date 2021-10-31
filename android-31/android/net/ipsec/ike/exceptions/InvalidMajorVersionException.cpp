#include "./InvalidMajorVersionException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// QAndroidJniObject forward
	InvalidMajorVersionException::InvalidMajorVersionException(QAndroidJniObject obj) : android::net::ipsec::ike::exceptions::IkeProtocolException(obj) {}
	
	// Constructors
	InvalidMajorVersionException::InvalidMajorVersionException(jbyte arg0)
		: android::net::ipsec::ike::exceptions::IkeProtocolException(
			"android.net.ipsec.ike.exceptions.InvalidMajorVersionException",
			"(B)V",
			arg0
		) {}
	
	// Methods
	jbyte InvalidMajorVersionException::getMajorVersion()
	{
		return callMethod<jbyte>(
			"getMajorVersion",
			"()B"
		);
	}
} // namespace android::net::ipsec::ike::exceptions

